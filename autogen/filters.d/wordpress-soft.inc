
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
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>

   failregex = ^%(__prefix_line)sAuthentication attempt with empty (?:username|password)<_tail>$ ; id=auth-empty
               ^%(__prefix_line)s(?:REST|XML-RPC) authentication failure(?: \(repeat\))? for <F-ALT_USER>.*</F-ALT_USER><_tail>$ ; id=auth-api-failure
               ^%(__prefix_line)sAuthentication (?:failure(?: \(repeat\))? for|attempt(?: \(repeat\))? for unknown user) <F-ALT_USER>.*</F-ALT_USER><_tail>$ ; id=auth-failure
               ^%(__prefix_line)sBlocked multicall pingback attempt<_tail>$ ; id=pingback-multicall
               ^%(__prefix_line)sComment attempt on <F-POST_STATUS>(?:non-existent|closed|trashed|draft|password-protected|unapproved comment)</F-POST_STATUS>(?:(?<=unapproved comment) <F-COMMENT_ID>\d+</F-COMMENT_ID> on post|(?<!unapproved comment) post) <F-POST_ID>\d+</F-POST_ID><_tail>$ ; id=comment-attempt
               ^%(__prefix_line)sPingback <F-COMMENT_ID>\d+</F-COMMENT_ID> on post <F-POST_ID>\d+</F-POST_ID> by "<F-PINGBACK_FROM_URL>.+</F-PINGBACK_FROM_URL>"<_tail>$ ; id=pingback
               ^%(__prefix_line)sTrackback <F-COMMENT_ID>\d+</F-COMMENT_ID> on post <F-POST_ID>\d+</F-POST_ID> by "<F-TRACKBACK_URL>.+</F-TRACKBACK_URL>"<_tail>$ ; id=trackback
               ^%(__prefix_line)sFailed password reset(?: for(?: (?:unknown user )?<F-ALT_USER>.*</F-ALT_USER>))?<_tail>$ ; id=password-reset-fail

   ignoreregex =

   journalmatch = SYSLOG_IDENTIFIER=wordpress

   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 6.3.0
   # Build Date: 2026-10-25T19:01:13+00:00
