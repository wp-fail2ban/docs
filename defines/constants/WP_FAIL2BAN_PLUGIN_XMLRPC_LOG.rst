.. _WP_FAIL2BAN_PLUGIN_XMLRPC_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_XMLRPC_LOG
-----------------------------

.. rubric:: Facility for "XML-RPC" class plugin events.
.. include:: default-log_user.rst

.. versionadded:: 4.2.0

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

   /**
    * Facility for XML-RPC class events.
    */
   define('WP_FAIL2BAN_PLUGIN_XMLRPC_LOG', LOG_LOCAL5);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_XMLRPC`
   * :ref:`facilities`
