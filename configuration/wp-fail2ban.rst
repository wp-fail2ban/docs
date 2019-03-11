.. _configuration__wp-fail2ban:

WP fail2ban
-----------

The Free version of *WPf2b* is configured by defining constants in ``wp-config.php``. If you're using the Permium version, or you know your way around ``wp-config.php`` already, skip ahead to :ref:`configuration__logging`.

The first step is to check you can edit your ``wp-config.php`` file. If you're not sure how to do that you'll need to contact your hosting provider - for now you can skip ahead to configuring :ref:`configuration__fail2ban`.

The second step is to **take a backup** of ``wp-config.php``. We're not going to touch any other part of WordPress, so if anything goes wrong and your site stops working, restoring this backup should get you running again.

