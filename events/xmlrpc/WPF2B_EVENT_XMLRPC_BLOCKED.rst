.. _WPF2B_EVENT_XMLRPC_BLOCKED:

WPF2B_EVENT_XMLRPC_BLOCKED
--------------------------

.. rubric:: Blocked XML-RPC request.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_XMLRPC_BLOCKED``.

Premium emits this event when the XML-RPC blocking feature rejects a request.
The request is terminated; :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` owns the
configured exceptions that can admit it instead.

+-----------+-----------+------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`                                 |
|           +-----------+------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                 |
|           +-----------+------------------------------------------------------------------+
|           | Example   | ``XML-RPC request blocked on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                    |
|           +-----------+------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/xmlrpc-blocked.rst.inc|
+-----------+-----------+------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-xmlrpc`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`

.. rubric:: History
.. versionadded:: 4.3.0
