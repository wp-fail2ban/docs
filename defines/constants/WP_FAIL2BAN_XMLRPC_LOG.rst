.. _WP_FAIL2BAN_XMLRPC_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_XMLRPC_LOG
----------------------

.. versionadded:: 3.6.0

----

This is for debugging and future development.

Attackers are doing weird things with XML-RPC, so this logs the raw post data to the file specified:

.. code-block:: php

	define('WP_FAIL2BAN_XMLRPC_LOG', '/var/log/xml-rpc.log');

