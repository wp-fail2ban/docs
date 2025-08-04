.. _WP_FAIL2BAN_XMLRPC_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_XMLRPC_LOG
----------------------

.. rubric:: Log XML-RPC messages to file.
.. include:: default-disabled.rst

.. warning::
   This is an advanced feature not available in the wordpress.org flavour.

----

For debugging and development purposes. Logs the complete raw XML-RPC message to the specified file, which is useful for analysing unusual XML-RPC attacks.

.. code-block:: php
   :caption: Example: Log XML-RPC messages

   /**
    * Log XML-RPC messages to file
    */
   define('WP_FAIL2BAN_XMLRPC_LOG', '/var/log/xml-rpc.log');

.. warning::
   This can generate large log files. Use with caution.

.. seealso::
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 3.6.0