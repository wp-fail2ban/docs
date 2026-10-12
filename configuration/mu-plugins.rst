.. _configuration__mu-plugins:

Must-use loading
================

A must-use (MU) installation loads |WPf2b| before ordinary plugins and prevents a site administrator from deactivating it through the usual Plugins screen. Choose it when that load order or availability matters. It changes how the plugin is loaded, not the meaning of its settings: Premium saved settings still apply, and a defined constant overrides only its corresponding setting.

WordPress only loads top-level PHP files from ``wp-content/mu-plugins`` automatically. Either leave the installed distribution in the ordinary ``plugins`` directory and add a top-level symlink to its ``wp-fail2ban.php``, or install it in a subdirectory below ``mu-plugins`` and add a top-level loader or symlink. For example, from inside ``mu-plugins`` when the plugin remains in the ordinary directory::

   ln -s ../plugins/wp-fail2ban/wp-fail2ban.php wp-fail2ban.php

For Premium, point the loader or symlink at the installed Premium copy. If the plugin remains in the ordinary plugins directory, its normal update channel can still replace its files. Premium also needs its normal activation for database setup. Ensure that the MU loader and any ordinary plugin entry resolve to the same installed copy; a separate active copy can cause a duplicate load.

When files are installed directly under ``mu-plugins``, WordPress does not offer the usual plugin update checks for them. Monitor the selected distribution channel and update those files deliberately. A host administrator can remove the top-level loader or symlink to stop MU loading; an independently active ordinary plugin entry can still load |WPf2b|. Verify the plugin and host integration after changing the loader; see :ref:`installation_verifying`.
