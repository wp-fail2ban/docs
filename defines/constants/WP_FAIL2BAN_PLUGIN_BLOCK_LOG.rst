.. _WP_FAIL2BAN_PLUGIN_BLOCK_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_BLOCK_LOG
----------------------------

.. rubric:: Facility for "Block" class plugin events.
.. include:: default-log_auth.rst

----

Specifies the syslog facility to use when logging block-related events from plugins.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

   /**
    * Facility for Block class plugin events.
    */
   define('WP_FAIL2BAN_PLUGIN_BLOCK_LOG', LOG_LOCAL5);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_BLOCK`
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 4.4.0