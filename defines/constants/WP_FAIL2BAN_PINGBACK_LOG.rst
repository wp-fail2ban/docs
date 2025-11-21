.. _WP_FAIL2BAN_PINGBACK_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PINGBACK_LOG
------------------------

.. rubric:: Facility for logging pingbacks.
.. include:: default-log_user.rst.inc

----

Specifies the syslog facility to use when logging XML-RPC pingback events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for logging pingbacks.
    */
   define('WP_FAIL2BAN_PINGBACK_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_PINGBACKS`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 2.2.0