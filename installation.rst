.. _installation:

======================
Installing WP fail2ban
======================

#. Upload the plugin to your plugins directory
#. Activate the plugin through the 'Plugins' menu in WordPress
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

5. Reload or restart `fail2ban`

You may want to set :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`, :ref:`WP_FAIL2BAN_PROXIES` and/or :ref:`WP_FAIL2BAN_BLOCKED_USERS`.

