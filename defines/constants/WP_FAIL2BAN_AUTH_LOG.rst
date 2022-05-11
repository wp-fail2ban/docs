.. _WP_FAIL2BAN_AUTH_LOG:

WP_FAIL2BAN_AUTH_LOG
--------------------

.. versionadded:: 2.2.0
.. versionchanged:: 4.4.0
   Uses :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

By default, *WPf2b* uses **LOG_AUTH** for logging authentication success or failure. If you'd like to use a different log add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_AUTH_LOG', LOG_LOCAL5);

Be sure to change the Facility to the one you're using.

.. seealso::
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

