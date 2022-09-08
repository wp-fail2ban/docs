.. _WPF2B_EVENT_XMLRPC_BLOCKED:

WPF2B_EVENT_XMLRPC_BLOCKED
--------------------------

.. rubric:: Blocked RPC-XML request.

.. rubric:: *Premium only*

+----------+----------+-----------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`        |
|          +----------+-----------------------------------------+
|          | Level    | NOTICE                                  |
+----------+----------+-----------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`              |
|          +----------+-----------------------------------------+
|          | Rule     | ``XML-RPC request blocked from <HOST>`` |
+----------+----------+-----------------------------------------+

.. versionadded:: 4.3.0

.. seealso::
   :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`
