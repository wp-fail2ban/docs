.. include:: <isonum.txt>

.. _configuration__fail2ban:

fail2ban
========

A fail2ban jail combines four things:

* a **filter** that recognises |WPf2b| messages;
* a **log source**, either a syslog file or the systemd journal;
* thresholds such as ``maxretry``, ``findtime``, and ``bantime``;
* an **action** that adds and removes firewall rules.

|WPf2b| supplies the filters. The jail selects a filter and log source; fail2ban's ``[DEFAULT]`` settings supply the ban action unless the jail overrides it.

Install the filters
-------------------

The plugin's ``filters.d`` directory contains these filters:

``wordpress-hard.conf``
   Events that normally justify an immediate ban, such as blocked user enumeration, blocked XML-RPC requests, and untrusted proxy headers.

``wordpress-soft.conf``
   Events that should normally require repeated failures, including failed logins and rejected comment attempts.

``wordpress-extra.conf``
   Optional informational events, such as successful comment submissions and password-reset requests. Use these only when they should contribute to a custom jail.

``wordpress-good.conf``
   Successful authentication events. This is useful for analysis and custom rules, not for a standard banning jail.

``wordpress-wpf2b-waf.conf``
   Premium WAF blocks. Install and enable a jail for this filter when the WAF is enabled.

Copy the required ``.conf`` files into fail2ban's ``filter.d`` directory, normally ``/etc/fail2ban/filter.d`` or ``/usr/local/etc/fail2ban/filter.d``. Keep the files in the plugin directory unchanged so plugin upgrades can replace them cleanly.

Configure syslog jails
----------------------

For file-based syslog, create ``wordpress.conf`` under fail2ban's ``jail.d`` directory. Replace ``/var/log/auth.log`` with the file that receives the facility selected by :ref:`WP_FAIL2BAN_AUTH_LOG`.

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

The hard jail bans on one match. The soft jail allows three matches within ten minutes. Adjust the thresholds and ban duration to suit the site's traffic and authentication patterns.

Configure journald jails
------------------------

The shipped filters contain ``journalmatch = SYSLOG_IDENTIFIER=wordpress``. With the systemd backend, omit ``logpath``; fail2ban reads matching journal entries directly.

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

Keep the default ``wordpress`` syslog identifier. If :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` changes it to ``wp``, set ``journalmatch = SYSLOG_IDENTIFIER=wp`` in each jail. The :ref:`quickstart_journald_support` card keeps the identifier unchanged and moves the site name into the message body.

Ban actions
-----------

The example jails inherit fail2ban's default action. Confirm that the selected ``banaction`` supports the host firewall and that the action honours ``port = http,https``. Override ``action`` or ``banaction`` in ``jail.local`` or the jail only when the host requires a different firewall integration.

Validate the complete path
--------------------------

Test fail2ban's configuration before reloading it::

   fail2ban-client -t
   fail2ban-client reload

Make a failed WordPress login from an address you can safely test. Confirm that the message reached the selected syslog file or the journal, then test it directly against the soft filter.

For a syslog file::

   fail2ban-regex /path/to/wordpress.log /etc/fail2ban/filter.d/wordpress-soft.conf

For journald::

   fail2ban-regex systemd-journal /etc/fail2ban/filter.d/wordpress-soft.conf

Finally, inspect the live jail::

   fail2ban-client status wordpress-soft

The filter match count should increase when the failed-login message is received. If the log contains the message but the count does not increase, the jail is reading the wrong source, using the wrong backend, or loading a different filter file. See :ref:`installation_verifying` and :ref:`operating_site_health`.

Custom filters and updates
--------------------------

Do not edit the filters inside the plugin. Put local fail2ban overrides in ``filter.d/*.local`` or give a substantially customised filter a different name. Custom rules must be reviewed whenever the shipped filters change.

Copy updated filters into fail2ban's ``filter.d`` directory when the release notes require it, validate the configuration, and reload the jails. See :ref:`operating_filters`.
