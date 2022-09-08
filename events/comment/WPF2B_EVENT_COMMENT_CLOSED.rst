.. _WPF2B_EVENT_COMMENT_CLOSED:

WPF2B_EVENT_COMMENT_CLOSED
--------------------------

.. rubric:: Attempted comment on closed Post.

+----------+----------+---------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_COMMENT_EXTRA_LOG`        |
|          +----------+---------------------------------------------+
|          | Level    | NOTICE                                      |
+----------+----------+---------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-extra_conf`                 |
|          +----------+---------------------------------------------+
|          | Rule     | ``Comments closed on post \d+ from <HOST>`` |
+----------+----------+---------------------------------------------+

.. versionadded:: 4.0.0
