.. _WPF2B_EVENT_XMLRPC_PINGBACK:

WPF2B_EVENT_XMLRPC_PINGBACK
---------------------------

.. rubric:: Pingback.

+----------+----------+------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_PINGBACK_LOG`    |
|          +----------+------------------------------------+
|          | Level    | INFO                               |
+----------+----------+------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-soft_conf`         |
|          +----------+------------------------------------+
|          | Rule     | ``Pingback requested from <HOST>`` |
+----------+----------+------------------------------------+
