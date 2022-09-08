.. _WPF2B_EVENT_COMMENT_NOT_FOUND:

WPF2B_EVENT_COMMENT_NOT_FOUND
-----------------------------

.. rubric:: Attempted comment on non-existent Post.

+----------+----------+--------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_COMMENT_EXTRA_LOG`       |
|          +----------+--------------------------------------------+
|          | Level    | NOTICE                                     |
+----------+----------+--------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-extra_conf`                |
|          +----------+--------------------------------------------+
|          | Rule     | ``Comment post \d+ not found from <HOST>`` |
+----------+----------+--------------------------------------------+

.. versionadded:: 4.0.0
