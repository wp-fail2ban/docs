.. _WP_FAIL2BAN_PLUGIN_XMLRPC_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_XMLRPC_LOG
-----------------------------

.. rubric:: Facility for "XML-RPC" class plugin events.
.. include:: default-log_user.rst.inc

----

Specifies the syslog facility to use when logging XML-RPC events from plugins.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for XML-RPC class plugin events.
    */
   define('WP_FAIL2BAN_PLUGIN_XMLRPC_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_XMLRPC`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 4.2.0