
.. _filters-wordpress-soft:

wordpress-soft.conf
-------------------

.. note::
   This filter is auto-generated.

.. code-block:: ini

   # Fail2Ban filter for soft failures
   #

   [INCLUDES]

   before = common.conf

   [Definition]

   _daemon = (?:wordpress|wp)
   __daemon_re = [\[\(]?<_daemon>(?:\(<F-SITE>\S+</F-SITE>\))?[\]\)]?:?
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>

   failregex = ^%(__prefix_line)sBlocked username authentication attempt for <F-ALT_USER>.*</F-ALT_USER><_tail>$
               ^%(__prefix_line)sPingback requested<_tail>$
               ^%(__prefix_line)sComment attempt on <F-POST_STATUS>(?:non-existent|closed|trashed|draft|password-protected)</F-POST_STATUS> post <F-POST_ID>\d+</F-POST_ID><_tail>$
               ^%(__prefix_line)sAuthentication attempt with empty username<_tail>$
               ^%(__prefix_line)sAuthentication (?:failure for|attempt for unknown user) <F-ALT_USER>.*</F-ALT_USER><_tail>$
               ^%(__prefix_line)s(?:REST|XML-RPC) authentication failure for <F-ALT_USER>.*</F-ALT_USER><_tail>$
               ^%(__prefix_line)sFailed password reset(?: for(?: (?:unknown user )?<F-ALT_USER>.*</F-ALT_USER>))?<_tail>$

   ignoreregex =

   journalmatch = SYSLOG_IDENTIFIER=wordpress

   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 6.0.0-beta1
   # Release Date: 2025-07-08
