.. _WPF2B_EVENT_COMMENT_PASSWORD:

WPF2B_EVENT_COMMENT_PASSWORD
----------------------------

.. rubric:: Attempted comment on password-protected Post.

+----------+----------+----------------------------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_COMMENT_EXTRA_LOG`                           |
|          +----------+----------------------------------------------------------------+
|          | Level    | NOTICE                                                         |
+----------+----------+----------------------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-extra_conf`                                    |
|          +----------+----------------------------------------------------------------+
|          | Rule     | ``Comment attempt on password-protected post \d+ from <HOST>`` |
+----------+----------+----------------------------------------------------------------+

.. versionadded:: 4.0.0
