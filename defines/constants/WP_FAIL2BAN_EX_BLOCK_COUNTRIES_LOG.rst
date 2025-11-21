.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG
----------------------------------

.. rubric:: Facility for country blocking events.
.. include:: default-log_user.rst.inc
.. include:: premium-only.rst.inc

----

Specifies the syslog facility to use when logging country blocking events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL2

   /**
    * Facility for country blocking events.
    */
   define('WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG', LOG_LOCAL2);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 4.3.2.0