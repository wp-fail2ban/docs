
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
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>

   prefregex = ^%(__prefix_line)sWAF\[blocked\] <F-CONTENT>.*</F-CONTENT>$

   failregex = ^wp_delete_user\(<F-ALT_USER_ID>\d+</F-ALT_USER_ID>\)="<F-ALT_USER>.*</F-ALT_USER>"<_tail>$ ; id=waf-delete-user
               ^SQLi<_tail>$ ; id=waf-sqli
               ^update_option\(<F-OPTION_NAME>.*?</F-OPTION_NAME>\)="<F-OPTION_VALUE>.*</F-OPTION_VALUE>"<_tail>$ ; id=waf-update-option

   ignoreregex =

   journalmatch = SYSLOG_IDENTIFIER=wordpress

   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 6.3.0
   # Build Date: 2026-10-25T19:01:13+00:00
