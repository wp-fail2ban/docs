
.. _filters-wordpress-extra:

wordpress-extra.conf
--------------------

.. note::
   This filter is auto-generated.

.. code-block:: ini

   # Fail2Ban filter for extra failures
   #

   [INCLUDES]

   before = common.conf

   [Definition]

   _daemon = (?:wordpress|wp)
   __daemon_re = [\[\(]?<_daemon>(?:\(<F-SITE>\S+</F-SITE>\))?[\]\)]?:?
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>

   failregex = ^%(__prefix_line)sComment <F-COMMENT_ID>\d+</F-COMMENT_ID><_tail>$
               ^%(__prefix_line)sPassword reset requested for <F-ALT_USER>.*</F-ALT_USER><_tail>$

   ignoreregex =

   journalmatch = SYSLOG_IDENTIFIER=wordpress

   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 6.0.0-beta1
   # Release Date: 2025-07-08
