.. _WP_FAIL2BAN_AUTH_LOG:

WP_FAIL2BAN_AUTH_LOG
--------------------

.. versionadded:: 2.2.0

By default, *WPf2b* uses **LOG_AUTH** for logging authentication success or failure. However, some systems use **LOG_AUTHPRIV** instead, but there's no good run-time way to tell. If your system uses **LOG_AUTHPRIV** you should add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_AUTH_LOG', LOG_AUTHPRIV);

