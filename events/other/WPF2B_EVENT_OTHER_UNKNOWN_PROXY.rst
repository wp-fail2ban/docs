.. _WPF2B_EVENT_OTHER_UNKNOWN_PROXY:

WPF2B_EVENT_OTHER_UNKNOWN_PROXY
-------------------------------

.. rubric:: Attempted access via an untrusted proxy.

+----------+----------+--------------------------------------------------+
| syslog   | Facility | LOG_AUTH or LOG_AUTHPRIV                         |
|          +----------+--------------------------------------------------+
|          | Level    | NOTICE                                           |
+----------+----------+--------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                       |
|          +----------+--------------------------------------------------+
|          | Rule     | ``Untrusted X-Forwarded-For header from <HOST>`` |
+----------+----------+--------------------------------------------------+

.. versionadded:: 5.0.0

.. seealso::
   :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
