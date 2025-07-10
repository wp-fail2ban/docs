.. _WP_FAIL2BAN_LOG_SPAM:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_SPAM
--------------------

.. rubric:: Log comments marked as spam.
.. include:: default-disabled.rst

.. versionadded:: 3.5.0

----

Enables logging of comments that are marked as spam. When enabled, the comment ID and IP address will be written to the syslog facility specified by :ref:`WP_FAIL2BAN_SPAM_LOG`.

.. code-block:: php
   :caption: Example: Enable spam logging

   /**
    * Log spam comments.
    */
   define('WP_FAIL2BAN_LOG_SPAM', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_SPAM_LOG`
