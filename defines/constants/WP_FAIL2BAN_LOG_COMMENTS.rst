.. _WP_FAIL2BAN_LOG_COMMENTS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_COMMENTS
------------------------

.. versionadded:: 3.5.0

----

*WP fail2ban* can log when a comment is submitted. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_COMMENTS', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

**Default:** Disabled.

.. seealso::
   * :ref:`WP_FAIL2BAN_COMMENT_LOG`

