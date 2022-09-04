.. _WPF2B_EVENT_XMLRPC_PINGBACK_ERROR:

WPF2B_EVENT_XMLRPC_PINGBACK_ERROR
---------------------------------

.. rubric:: Pingback error.

+----------+----------+---------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_PINGBACK_LOG`             |
|          +----------+---------------------------------------------+
|          | Level    | NOTICE                                      |
+----------+----------+---------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                  |
|          +----------+---------------------------------------------+
|          | Rule     | ``Pingback error .* generated from <HOST>`` |
+----------+----------+---------------------------------------------+
