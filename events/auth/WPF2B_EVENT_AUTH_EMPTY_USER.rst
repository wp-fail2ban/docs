.. _WPF2B_EVENT_AUTH_EMPTY_USER:

WPF2B_EVENT_AUTH_EMPTY_USER
---------------------------

.. rubric:: Empty Username.

+----------+----------+--------------------------------+
| syslog   | Facility | LOG_AUTH or LOG_AUTHPRIV       |
|          +----------+--------------------------------+
|          | Level    | NOTICE                         |
+----------+----------+--------------------------------+
| fail2ban | Filter   | :ref:`wordpress-soft_conf`     |
|          +----------+--------------------------------+
|          | Rule     | ``Empty username from <HOST>`` |
+----------+----------+--------------------------------+

.. seealso::
   :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
