.. include:: <isonum.txt>

.. _configuration__fail2ban:

fail2ban
--------

``fail2ban`` can be tricky to configure correctly; with so many flavours of Linux it's impossible to provide anything but general guidance.


Standard Filters
^^^^^^^^^^^^^^^^

The filter files included are intended only as a starting point for those who want *WPf2b* to work "out of the box".

There is no "one size fits all" configuration possible for `fail2ban` - what may be a soft failure for one site should be treated as a hard failure for another, and vice versa. Careful thought should be given to what is appropriate for your environment.


syslog vs. journald
^^^^^^^^^^^^^^^^^^^

While *WPf2b* supports both, **I strongly recommend avoiding journald** if at all possible. If your Linux distro has decided to stop using a real syslog (e.g. Debian 12) you should consider switching distros.

However, I understand that most people will just use whatever comes with their favourite distro and not worry about journald; thus, v5.3 brings :ref:`basic support <WP_FAIL2BAN_SYSLOG_TAG_HOST>` for journald and v6.0 will provide even more.


Typical Settings (syslog)
"""""""""""""""""""""""""

#. Copy `wordpress-hard.conf` and `wordpress-soft.conf` to your `fail2ban/filters.d` directory
#. Create a new file in `jail.d` called `wordpress.conf`:

.. code-block:: ini

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


.. note::

   Make sure you change ``logpath`` to the correct log for your OS.

3. Reload or restart `fail2ban`


Typical Settings (journald)
"""""""""""""""""""""""""""



#. Edit the `wp-config.php` file for your WordPress install:

.. code-block:: php

   // Make sure we're not using the short ("wp") tag
   define('WP_FAIL2BAN_SYSLOG_SHORT_TAG', false);

   // Don't include the HTTP host in the tag
   define('WP_FAIL2BAN_SYSLOG_TAG_HOST', false);

   /* That's all, stop editing! Happy blogging. */


#. Copy `wordpress-hard.conf` and `wordpress-soft.conf` to your `fail2ban/filters.d` directory
#. Create a new file in `jail.d` called `wordpress.conf`:

.. code-block:: ini

   [wordpress-hard]
   enabled = true
   filter = wordpress-hard
   backend = systemd
   journalmatch = SYSLOG_IDENTIFIER=wordpress
   maxretry = 1
   port = http,https

   [wordpress-soft]
   enabled = true
   filter = wordpress-soft
   backend = systemd
   journalmatch = SYSLOG_IDENTIFIER=wordpress
   maxretry = 3
   port = http,https


3. Reload or restart `fail2ban`


Filters
^^^^^^^

`wordpress-hard.conf` and `wordpress-soft.conf`
"""""""""""""""""""""""""""""""""""""""""""""""

There are some things that are almost always malicious, e.g. blocked users and pingbacks with errors. `wordpress-hard.conf` is designed to catch these so that you can ban the IP immediately.

Other things are relatively benign, like a failed login. You can't let people try forever, but banning the IP immediately would be wrong too. `wordpress-soft.conf` is designed to catch these so that you can set a higher retry limit before banning the IP.

For the avoidance of doubt: you should be using *both* filters.


.. _configuration__fail2ban__custom-filters:

Custom Filters
""""""""""""""

You should never modify the standard `wordpress-hard.conf` and `wordpress-soft.conf` files. Instead, copy them to, for example, `wordpress-hard-custom.conf` and `wordpress-soft-custom.conf`, and edit those.

It is very rare that individual filter rules are modified, but new rules are common; there is always an entry in the "Updating" notes when there is any change to the rules. **It is your responsibility to ensure the rules in your custom filters are kept current.**

`wordpress-extra.conf`
""""""""""""""""""""""

Version 4 introduced a number of new logging options which didn't fit cleanly into either of the `hard` or `soft` filters - they're `extra`.

For example, if your site doesn't use WordPress comments at all, you could add the rules matching attempted comments to the `hard-custom` filter. Again, there is no "one size fits all" for these rules.


.. _configuration__fail2ban__updating:

Updating
^^^^^^^^

Whether you use the standard filter files or a highly-customised set of your own, **it is critical they are kept up to date**. There is always an entry in the "Updating" notes when the filter files need to be updated.

Obsolete filters may cause users to be blocked incorrectly, or attackers not to be detected.

*WPf2b* **cannot** update them for you.

See :ref:`maintenance__updating_filters`.