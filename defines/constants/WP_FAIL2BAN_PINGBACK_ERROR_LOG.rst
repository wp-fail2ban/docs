.. _WP_FAIL2BAN_PINGBACK_ERROR_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PINGBACK_ERROR_LOG
------------------------------

.. rubric:: Facility for logging pingback errors.
.. include:: default-log_user.rst

.. versionadded:: 4.0.5
   Reserved for future use.

----

Specifies the syslog facility to use when logging pingback error events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for logging pingback errors.
    */
   define('WP_FAIL2BAN_PINGBACK_ERROR_LOG', LOG_LOCAL3);

.. note::
   This constant is reserved for future use.

