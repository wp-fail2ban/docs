.. _configuration:

=============
Configuration
=============

.. _configuration_fail2ban:

fail2ban
--------

Filters
^^^^^^^

#. Copy `wordpress-hard.conf` and `wordpress-soft.conf` to your `fail2ban/filters.d` directory
#. Edit `jail.local` to include something like:

.. code-block:: sh

   [wordpress-hard]
   enabled = true
   filter = wordpress-hard
   logpath = /var/log/auth.log
   maxretry = 1
   port = http,https

   [wordpress-soft]
   enabled = true
   filter = wordpress-soft
   logpath = /var/log/auth.log
   maxretry = 3
   port = http,https

3. Reload or restart `fail2ban`


`wordpress-hard.conf` and `wordpress-soft.conf`
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

There are some things that are almost always malicious, e.g. blocked users and pingbacks with errors. `wordpress-hard.conf` is designed to catch these so that you can ban the IP immediately.

Other things are relatively benign, like a failed login. You can't let people try forever, but banning the IP immediately would be wrong too. `wordpress-soft.conf` is designed to catch these so that you can set a higher retry limit before banning the IP.

For the avoidance of doubt: you should be using *both* filters.


.. _configuration_mu-plugins_support:

`mu-plugins` Support
--------------------

One of the better ways is to install *WPf2b* as usual and then create a symlink in ``mu-plugins``:

.. code-block:: sh

	lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> ../plugins/wp-fail2ban/wp-fail2ban.php

This has the advantage that you can update *WPf2b* as usual without having to update ``mu-plugins`` directly.  You don't need to activate *WPf2b*, but it won't hurt if you do.

