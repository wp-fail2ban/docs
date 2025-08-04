.. _WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS
--------------------------------

.. rubric:: Log attempted comments.
.. include:: default-disabled.rst

----

Enables logging of failed comment attempts. When enabled, the following events will be logged to the syslog facility specified by :ref:`WP_FAIL2BAN_COMMENT_ATTEMPT_LOG`:

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
   :caption: Example: Enable logging of comment attempts

   /**
    * Log attempted comments.
    */
   define('WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_COMMENT_ATTEMPT_LOG`

.. rubric:: History
.. versionadded:: 5.0.0