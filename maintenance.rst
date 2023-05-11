.. highlight:: console

.. _maintenance:

===========
Maintenance
===========

While *WPf2b* needs no routine maintenance, from time to time there are changes that will require modifying your configuration.

.. _maintenance__updating_filters:

Updating Filters
################

Keeping your ``fail2ban`` filters up-to-date is critical for the correct operation of *WPf2b*.

When to Update
**************

Knowing when to update your filters has changed since 4.4.x. The release notes, as always, still say whether updating is necessary, but now that *WPf2b* strictly follows SemVer it's trivial to determine when an update is needed. In addition, the WordPress Site Health tool now checks if the filters are up-to-date.

SemVer
======

From v5.0.1 to v5.0.x
  You will **never** need to update the filters.

From v5.0.x to v5.1.0
  You **may** need to update the filters to enable **new** features; existing configurations will continue to work as before.

From v5.x.y to v6.0.0
  You **may** need to update the filters for **existing** features to work.

How to Update
*************

The new filter files can be found in your WordPress install: ``/wp-content/plugins/wp-fail2ban/filters.d`` or ``/wp-content/plugins/wp-fail2ban-premium/filters.d``.

The old filter files can be found in the ``filter.d`` directory in your ``fail2ban`` install.

It's usually a good idea to take a backup of the old filters.

Then, copy the new filter files to the ``filter.d`` directory, and reload the ``fail2ban`` jails:

::

  # fail2ban-client reload

.. tip::

   ``fail2ban`` can usually be found in:

     * ``/etc/fail2ban/``
     * ``/usr/local/etc/fail2ban/``
  
   but may live somewhere else on your system.

   If you're running Windows and know where ``fail2ban`` usually lives, please submit a PR for this page.
