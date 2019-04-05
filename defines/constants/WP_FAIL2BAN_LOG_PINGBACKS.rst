.. _WP_FAIL2BAN_LOG_PINGBACKS:

WP_FAIL2BAN_LOG_PINGBACKS
-------------------------

.. versionadded:: 2.2.0

Based on a suggestion from *@maghe*, *WPf2b* can now log pingbacks. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_PINGBACKS', true);

By default, *WPf2b* uses **LOG_USER** for logging pingbacks. If you'd rather it used a different facility you can change it by adding something like the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_PINGBACK_LOG', LOG_LOCAL3);

