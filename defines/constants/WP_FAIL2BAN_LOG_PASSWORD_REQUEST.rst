.. _WP_FAIL2BAN_LOG_PASSWORD_REQUEST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_PASSWORD_REQUEST
--------------------------------

.. rubric:: Log password reset requests.
.. include:: default-disabled.rst

.. versionadded:: 3.5.0

----

.. code-block:: php

	/**
	 * Log password reset requests.
	 */
	define('WP_FAIL2BAN_LOG_PASSWORD_REQUEST', true);

The username and IP will be written to :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG` and matched by :ref:`wordpress-extra_conf`.
