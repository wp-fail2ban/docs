.. _WPF2B_EVENT_AUTH_BLOCK_USER:

WPF2B_EVENT_AUTH_BLOCK_USER
---------------------------

.. rubric:: Blocked username.

+----------+----------+-------------------------------------------------------+
| syslog   | Facility | LOG_AUTH or LOG_AUTHPRIV                              |
|          +----------+-------------------------------------------------------+
|          | Level    | NOTICE                                                |
+----------+----------+-------------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                            |
|          +----------+-------------------------------------------------------+
|          | Rule     | ``Blocked authentication attempt for .* from <HOST>`` |
+----------+----------+-------------------------------------------------------+

.. seealso::
   :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   :ref:`WP_FAIL2BAN_BLOCKED_USERS`
