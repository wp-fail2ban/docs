.. _WPF2B_EVENT_XMLRPC_BLOCKED:

WPF2B_EVENT_XMLRPC_BLOCKED
--------------------------

.. rubric:: Blocked RPC-XML request.
.. rubric:: *Premium only*

+-----------+-----------+------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`                                 |
|           +-----------+------------------------------------------------------------------+
|           | Level     | NOTICE                                                           |
|           +-----------+------------------------------------------------------------------+
|           | Example   | ``XML-RPC request blocked on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                    |
|           +-----------+------------------------------------------------------------------+
|           | Rule      | ``XML-RPC request blocked<_tail>``                               |
+-----------+-----------+------------------------------------------------------------------+

.. seealso::
   :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`

.. rubric:: History
.. versionadded:: 4.3.0
