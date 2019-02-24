.. _configuration__fail2ban:

fail2ban
--------

``fail2ban`` can be tricky to configure correctly; with so many flavours of Linux it's impossible to provide anything but general guidance.


Filters
^^^^^^^

The filter files included are intended only as a starting point for those who want *WPf2b* to work "out of the box".

There is no "one size fits all" configuration possible for `fail2ban` - what may be a soft failure for one site should be treated as a hard failure for another, and vice versa. Careful thought should be given to what is appropriate for your environment.


Typical Settings
""""""""""""""""

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
"""""""""""""""""""""""""""""""""""""""""""""""

There are some things that are almost always malicious, e.g. blocked users and pingbacks with errors. `wordpress-hard.conf` is designed to catch these so that you can ban the IP immediately.

Other things are relatively benign, like a failed login. You can't let people try forever, but banning the IP immediately would be wrong too. `wordpress-soft.conf` is designed to catch these so that you can set a higher retry limit before banning the IP.

For the avoidance of doubt: you should be using *both* filters.


`wordpress-extra.conf`
""""""""""""""""""""""

Version 4 introduced a number of new logging options which didn't fit cleanly into either of the `hard` or `soft` filters - they're `extra`.

For example, if your site doesn't use WordPress comments at all, you could add the rules matching attempted comments to the `hard` filter. Again, there is no "one size fits all" for these rules.

