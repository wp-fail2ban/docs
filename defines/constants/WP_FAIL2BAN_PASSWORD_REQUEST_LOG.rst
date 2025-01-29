.. _WP_FAIL2BAN_PASSWORD_REQUEST_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PASSWORD_REQUEST_LOG
--------------------------------

.. rubric:: Facility for logging password reset events.
.. include:: default-log_user.rst

.. versionadded:: 4.0.0

----

Specifies the syslog facility to use when logging password reset request events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for logging password reset events.
    */
   define('WP_FAIL2BAN_PASSWORD_REQUEST_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_PASSWORD_REQUEST`
