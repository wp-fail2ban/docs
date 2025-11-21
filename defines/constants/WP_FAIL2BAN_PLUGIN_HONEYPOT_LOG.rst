.. _WP_FAIL2BAN_PLUGIN_HONEYPOT_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_HONEYPOT_LOG
--------------------------------

.. rubric:: Facility for honeypot events.
.. include:: default-log_auth.rst

----

Specifies the syslog facility to use when logging Honeypot events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for "Honeypot" class plugin events.
    */
   define('WP_FAIL2BAN_PLUGIN_HONEYPOT_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 6.0.0