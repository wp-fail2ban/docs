
.. _filters-wordpress-hard:

wordpress-hard.conf
-------------------

.. note::
   This filter is auto-generated.

.. code-block:: ini

   # Fail2Ban filter for hard failures
   #

   [INCLUDES]

   before = common.conf

   [Definition]

   _daemon = (?:wordpress|wp)
   __daemon_re = [\[\(]?<_daemon>(?:\(<F-SITE>\S+</F-SITE>\))?[\]\)]?:?
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>

   failregex = ^%(__prefix_line)sXML-RPC request blocked<_tail>$
               ^%(__prefix_line)s.*; Bogus Pingback<_tail>$
               ^%(__prefix_line)sBlocked access from country '<F-ISO_CODE>..</F-ISO_CODE>'<_tail>$
               ^%(__prefix_line)sAttempted access to honeypot \(robots.txt: <F-REQUEST_PATH>.*?</F-REQUEST_PATH>\)<_tail>$
               ^%(__prefix_line)sAkismet discarded spam comment<_tail>$
               ^%(__prefix_line)sImmediately block connections<_tail>$
               ^%(__prefix_line)sBlocked authentication attempt for <F-ALT_USER>.*</F-ALT_USER><_tail>$
               ^%(__prefix_line)sXML-RPC multicall authentication failure<_tail>$
               ^%(__prefix_line)sPingback error <F-ERRCODE>\d+</F-ERRCODE> generated<_tail>$
               ^%(__prefix_line)sSpam comment <F-COMMENT_ID>\d+</F-COMMENT_ID><_tail>$
               ^%(__prefix_line)sBlocked user enumeration attempt<_tail>$
               ^%(__prefix_line)sUntrusted X-Forwarded-For header<_tail>$
               ^%(__prefix_line)s(?:REST|XML-RPC) authentication attempt for unknown user <F-ALT_USER>.*</F-ALT_USER><_tail>$

   ignoreregex =

   journalmatch = SYSLOG_IDENTIFIER=wordpress

   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 6.0.0-beta1
   # Release Date: 2025-07-12
