.. _WPF2B_EVENT_AUTH_BLOCK_USER_ENUM:

WPF2B_EVENT_AUTH_BLOCK_USER_ENUM
--------------------------------

.. rubric:: Blocked user enumeration.

+----------+----------+--------------------------------------------------+
| syslog   | Facility | LOG_AUTH or LOG_AUTHPRIV                         |
|          +----------+--------------------------------------------------+
|          | Level    | NOTICE                                           |
+----------+----------+--------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                       |
|          +----------+--------------------------------------------------+
|          | Rule     | ``Blocked user enumeration attempt from <HOST>`` |
+----------+----------+--------------------------------------------------+

.. versionadded:: 4.3.0

.. seealso::
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   | :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`
