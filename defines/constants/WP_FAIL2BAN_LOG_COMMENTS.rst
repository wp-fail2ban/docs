.. _WP_FAIL2BAN_LOG_COMMENTS:

WP_FAIL2BAN_LOG_COMMENTS
------------------------

.. versionadded:: 3.5.0

*WPf2b* can now log comments. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_COMMENTS', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

.. seealso::
   * :ref:`WP_FAIL2BAN_COMMENT_LOG`

