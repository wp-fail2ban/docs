.. _WP_FAIL2BAN_OPENLOG_OPTIONS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_OPENLOG_OPTIONS
---------------------------

.. rubric:: Configure syslog options.
.. rubric:: Default: ``LOG_PID | LOG_NDELAY``

----

Sets the option mask passed to PHP's ``openlog()``. The shipped default includes
the process ID and opens the connection immediately.

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
