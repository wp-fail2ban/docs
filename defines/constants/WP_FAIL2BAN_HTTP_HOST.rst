.. _WP_FAIL2BAN_HTTP_HOST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_HTTP_HOST
---------------------

.. versionadded:: 3.0.0

----

This is for some flavours of Linux where :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` isn't enough.

If you configure your web server to set an environment variable named **WP_FAIL2BAN_SYSLOG_SHORT_TAG** on a per-virtual host basis, *WPf2b* will use that in the syslog tag. This allows you to configure a unique tag per site in a way that makes sense for your configuration, rather than some arbitrary truncation or hashing within the plugin.

.. note::

   This feature has not been tested as extensively as others. While I'm confident it works, FreeBSD doesn't have this problem so this feature will always be second-tier.

