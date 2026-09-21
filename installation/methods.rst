.. _installation_methods:

Installation methods
====================

For the 6.3 Canonical release, upload its signed archive from `GitHub releases <https://github.com/wp-fail2ban/wp-fail2ban/releases>`_ in WordPress, or install it with Composer using ``composer require wp-fail2ban/wp-fail2ban``. The Canonical distribution includes a self-updater; a Composer or Git Updater installation follows its own update channel.

Premium is available through Freemius or the Premium Composer channel described in the Members area. Activate it in WordPress so its four InnoDB tables and reporting view are created. The event history remains in the database after deactivation; see :ref:`operating_event_storage`.

The WordPress Plugin Directory installs the LTS distribution described in :ref:`about_editions`. Check its version before using this 6.3 manual for the installed plugin.

Every distribution includes fail2ban filter source files in the plugin's ``filters.d`` directory. A privileged host administrator copies the required files into fail2ban's ``filter.d`` directory and configures jails for the host log or journal that receives |WPf2b| messages. See :ref:`configuration__fail2ban`.

To load |WPf2b| before ordinary plugins or prevent normal plugin deactivation, see :ref:`configuration__mu-plugins`. Once the plugin and host integration are installed, follow :ref:`installation_verifying`.
