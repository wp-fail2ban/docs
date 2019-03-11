.. _WP_FAIL2BAN_LOG_PASSWORD_REQUEST:

WP_FAIL2BAN_LOG_PASSWORD_REQUEST
--------------------------------

.. versionadded:: 3.5.0

*WPf2b* can log password reset requests. Add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_PASSWORD_REQUEST', true);

The username and IP will be written to :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG` and matched by :ref:`wordpress-extra_conf`.

