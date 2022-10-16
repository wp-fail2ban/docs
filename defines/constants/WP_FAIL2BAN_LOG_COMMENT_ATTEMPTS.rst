.. _WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS
--------------------------------

.. rubric:: Log attempted comments.
.. include:: default-disabled.rst

.. versionadded:: 5.0.0

----

*WPf2b* can optionally log the following comment-related events:

+------------------------+---------------------------------------------------+
| **Not found**          | Attempted comment on a non-existent post.         |
+------------------------+---------------------------------------------------+
| **Closed**             | Attempted comment on a post with closed comments. |
+------------------------+---------------------------------------------------+
| **Trash**              | Attempted comment on a post in Trash.             |
+------------------------+---------------------------------------------------+
| **Draft**              | Attempted comment on a Draft post.                |
+------------------------+---------------------------------------------------+
| **Password-protected** | Attempted comment on a password-protected post.   |
+------------------------+---------------------------------------------------+

.. code-block:: php

   /**
    * Log attempted comments.
    */
   define('WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_ATTEMPT_LOG` and matched by :ref:`wordpress-soft_conf`.

.. seealso::
   * :ref:`WP_FAIL2BAN_COMMENT_ATTEMPT_LOG`
