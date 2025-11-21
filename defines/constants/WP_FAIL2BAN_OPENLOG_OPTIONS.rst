.. _WP_FAIL2BAN_OPENLOG_OPTIONS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_OPENLOG_OPTIONS
---------------------------

.. rubric:: Configure syslog options.
.. include:: default-disabled.rst.inc

----

Allows configuration of PHP's openlog options. These control how messages are written to the system log.

.. code-block:: php
   :caption: Example: Set syslog options

   /**
    * Set openlog options
    */
   define('WP_FAIL2BAN_OPENLOG_OPTIONS', LOG_NDELAY|LOG_PID);

.. warning::
   If in doubt, leave this setting alone.

.. rubric:: History
.. versionadded:: 3.5.0