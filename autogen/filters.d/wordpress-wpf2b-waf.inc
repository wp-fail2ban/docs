
.. _filters-wordpress-wpf2b-waf:

wordpress-wpf2b-waf.conf
------------------------

.. note::
   This filter is auto-generated.

.. code-block:: ini

   # Fail2Ban filter for wpf2b-waf failures
   #

   [INCLUDES]

   before = common.conf

   [Definition]

   _daemon = (?:wordpress|wp)
   __daemon_re = [\[\(]?<_daemon>(?:\(<F-SITE>\S+</F-SITE>\))?[\]\)]?:?
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>

   prefregex = ^%(__prefix_line)sWAF\[blocked\] <F-CONTENT>.*</F-CONTENT>$

   failregex = ^update_option\(<F-OPTION_NAME>.*?</F-OPTION_NAME>\)="<F-OPTION_VALUE>.*</F-OPTION_VALUE>"<_tail>$
               ^attempt to delete user <F-ALT_USER>.*</F-ALT_USER> \(<F-ALT_USER_ID>\d+</F-ALT_USER_ID>\)<_tail>$
               ^SQLi<_tail>$

   ignoreregex =

   journalmatch = SYSLOG_IDENTIFIER=wordpress

   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 6.0.0-beta1
   # Release Date: 2025-07-12
