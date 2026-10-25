
.. _filters-wordpress-good:

wordpress-good.conf
-------------------

.. note::
   This filter is auto-generated.

.. code-block:: ini

   # Fail2Ban filter for good failures
   #

   [INCLUDES]

   before = common.conf

   [Definition]

   _daemon = (?:wordpress|wp)
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>

   failregex = ^%(__prefix_line)s(?:REST|XML-RPC) authentication success(?: \(repeat\))? for <F-ALT_USER>.*</F-ALT_USER><_tail>$ ; id=auth-api-success
               ^%(__prefix_line)sAccepted password(?: \(repeat\))? for <F-ALT_USER>.*</F-ALT_USER><_tail>$ ; id=auth-success

   ignoreregex =

   journalmatch = SYSLOG_IDENTIFIER=wordpress

   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 6.3.0
   # Build Date: 2026-10-25T19:01:13+00:00
