.. _installation_methods:

Installation methods
====================

Canonical (GitHub)
------------------

* Download the signed zip from `GitHub releases <https://github.com/wp-fail2ban/wp-fail2ban/releases>`_ and upload it in WordPress.
* Composer: ``composer require wp-fail2ban/wp-fail2ban``
* WP-CLI with `Git Updater <https://git-updater.com/git-updater/>`_: ``wp plugin install-git wp-fail2ban``

The Canonical flavour includes a self-updater. Git Updater or Composer, if present, take precedence.

WordPress.org (LTS)
-------------------

Install from the Plugin Directory as usual.

Premium
-------

Download from Freemius or install via Composer (see the Members page). Activating Premium creates ``wp_fail2ban_log`` and ``wp_fail2ban_plugins``. |WPf2b| never drops those tables.

Installed files
---------------

Every distribution includes the fail2ban filters in its ``filters.d`` directory. Copy the filters you use into fail2ban's ``filter.d`` directory and configure jails to consume the same syslog file or journal that receives |WPf2b| messages. See :ref:`configuration__fail2ban`.

Must-use
--------

To load before other security plugins, or to stop site admins disabling it, install as an MU-plugin. See :ref:`configuration__mu-plugins`.
