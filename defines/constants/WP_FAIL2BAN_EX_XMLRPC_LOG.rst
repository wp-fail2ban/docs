.. _WP_FAIL2BAN_EX_XMLRPC_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_LOG
-------------------------

.. rubric:: Facility for :ref:`XML-RPC class <events_XMLRPC>` events.
.. include:: default-log_user.rst.inc
.. include:: premium-only.rst.inc

----

Specifies the syslog facility to use when logging XML-RPC events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL7

   /**
    * Facility for XML-RPC events.
    */
   define('WP_FAIL2BAN_EX_XMLRPC_LOG', LOG_LOCAL7);

.. seealso::
   * :ref:`events_XMLRPC`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 4.3.2.0