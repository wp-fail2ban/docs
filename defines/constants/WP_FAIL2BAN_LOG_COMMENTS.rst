.. _WP_FAIL2BAN_LOG_COMMENTS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_COMMENTS
------------------------

.. rubric:: Log submitted comments.
.. include:: default-disabled.rst.inc

----

Enables logging of all submitted comments. When enabled, the comment ID and IP address will be written to the syslog facility specified by :ref:`WP_FAIL2BAN_COMMENT_LOG`.

.. code-block:: php
   :caption: Example: Enable comment logging

   /**
    * Log submitted comments.
    */
   define('WP_FAIL2BAN_LOG_COMMENTS', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_COMMENT_LOG`

.. rubric:: History
.. versionadded:: 3.5.0