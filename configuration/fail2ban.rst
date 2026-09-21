.. include:: <isonum.txt>

.. _configuration__fail2ban:

Configuring fail2ban
====================

On a properly secured server, WordPress should not be able to modify fail2ban's configuration. |WPf2b| therefore ships filter files inside the plugin, while a privileged host administrator installs the copies that fail2ban uses. Plugin updates replace the shipped source files, not those host copies. The administrator also configures jails and their firewall action.

A jail combines a filter that recognises a message, the log file or journal it reads, a counting policy, and an action. For a simple installation, route the relevant |WPf2b| messages to one host log and point the jails at it. If you route facilities to different sources, each jail must read the source containing its message class. See :ref:`operating_logging` for the logging model and :ref:`facilities` for exact facilities.

Install the filters
-------------------

Copy the required ``.conf`` files from the plugin's ``filters.d`` directory to fail2ban's ``filter.d`` directory, commonly ``/etc/fail2ban/filter.d`` or ``/usr/local/etc/fail2ban/filter.d``. The supplied classes are:

``wordpress-hard.conf``
   High-confidence hostile activity, normally suitable for an immediate ban.

``wordpress-soft.conf``
   Activity such as failed authentication, normally counted over repeated attempts.

``wordpress-extra.conf``
   Optional or informational activity for a deliberately configured jail.

``wordpress-good.conf``
   Successful authentication for analysis or custom rules, not a standard banning jail.

``wordpress-wpf2b-waf.conf``
   Premium WAF blocks, for use with a WAF jail when that protection is enabled.

Keep the plugin copies unchanged so updates can replace them. Place local fail2ban overrides in ``filter.d/*.local`` or use a separately named custom filter. See :ref:`operating_filters` for maintaining installed copies.

File-based syslog jails
-----------------------

The following example reads ``/var/log/auth.log``. Use the file to which the host actually routes the selected |WPf2b| facility; the path is not universal. The action is inherited from fail2ban's host configuration, so check that it targets the intended firewall and honours the selected ports.

.. code-block:: ini

   [wordpress-hard]
   enabled = true
   filter = wordpress-hard
   logpath = /var/log/auth.log
   port = http,https
   maxretry = 1
   findtime = 10m
   bantime = 1h

   [wordpress-soft]
   enabled = true
   filter = wordpress-soft
   logpath = /var/log/auth.log
   port = http,https
   maxretry = 3
   findtime = 10m
   bantime = 1h

These thresholds illustrate one immediate and one repeated-attempt policy. Choose thresholds and ban duration for the site's traffic and risk. When another facility is routed elsewhere, add a jail reading that source before expecting its messages to count.

Journal jails
-------------

For the systemd backend, the shipped filters select ``SYSLOG_IDENTIFIER=wordpress``. Journal identifier matching is exact, while the default |WPf2b| identifier, ``wordpress(host)``, varies by site; a pattern cannot cover those varying values. Enable inline-host formatting, for example with the Journald QuickStart card, before using the following jails. It gives the stable identifier ``wordpress`` and puts the host in the message. If short-tag mode is also enabled, the identifier is ``wp``; adjust the installed filter's ``journalmatch`` accordingly. See :ref:`operating_syslog`.

.. code-block:: ini

   [wordpress-hard]
   enabled = true
   filter = wordpress-hard
   backend = systemd
   port = http,https
   maxretry = 1
   findtime = 10m
   bantime = 1h

   [wordpress-soft]
   enabled = true
   filter = wordpress-soft
   backend = systemd
   port = http,https
   maxretry = 3
   findtime = 10m
   bantime = 1h

Check and reload
----------------

After installing or updating filters and jails, validate and reload fail2ban::

   fail2ban-client -t
   fail2ban-client reload

Check a message against the installed filter, using the host source that receives it::

   fail2ban-regex /path/to/wordpress.log /etc/fail2ban/filter.d/wordpress-soft.conf
   fail2ban-regex systemd-journal /etc/fail2ban/filter.d/wordpress-soft.conf

Then inspect the live jail with ``fail2ban-client status wordpress-soft``. A match and rising jail count show that the jail sees the message. Finish with :ref:`installation_verifying` to exercise the ban action and confirm the firewall change.
