.. _WPF2B_EVENT_XMLRPC_PINGBACK_BOGUS:

WPF2B_EVENT_XMLRPC_PINGBACK_BOGUS
---------------------------------

.. rubric:: Bogus Pingback.

.. rubric:: *Premium only*

+----------+----------+------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_PINGBACK_LOG`    |
|          +----------+------------------------------------+
|          | Level    | NOTICE                             |
+----------+----------+------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`         |
|          +----------+------------------------------------+
|          | Rule     | ``.*; Bogus Pingback from <HOST>`` |
+----------+----------+------------------------------------+

.. versionadded:: 4.0.0
