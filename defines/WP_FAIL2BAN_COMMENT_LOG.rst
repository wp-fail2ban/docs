.. _WP_FAIL2BAN_COMMENT_LOG:

WP_FAIL2BAN_COMMENT_LOG
-----------------------

.. versionadded:: 3.5.0

By default, *WPf2b* uses **LOG_USER** for logging comments. If you'd rather it used a different facility you can change it by adding something like the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_COMMENT_LOG', LOG_LOCAL3);

.. seealso:: :ref:`WP_FAIL2BAN_LOG_COMMENTS`.

