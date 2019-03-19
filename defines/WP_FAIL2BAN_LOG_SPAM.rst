.. _WP_FAIL2BAN_LOG_SPAM:

WP_FAIL2BAN_LOG_SPAM
--------------------

.. versionadded:: 3.5.0

*WPf2b* can now log spam comments. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_SPAM', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_SPAM_LOG` and matched by :ref:`wordpress-hard_conf`.

.. seealso::
   * :ref:`WP_FAIL2BAN_SPAM_LOG`

