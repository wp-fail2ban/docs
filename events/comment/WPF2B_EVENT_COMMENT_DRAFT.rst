.. _WPF2B_EVENT_COMMENT_DRAFT:

WPF2B_EVENT_COMMENT_DRAFT
-------------------------

.. rubric:: Attempted comment on draft Post.

+----------+----------+---------------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_COMMENT_EXTRA_LOG`              |
|          +----------+---------------------------------------------------+
|          | Level    | NOTICE                                            |
+----------+----------+---------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-extra_conf`                       |
|          +----------+---------------------------------------------------+
|          | Rule     | ``Comment attempt on draft post \d+ from <HOST>`` |
+----------+----------+---------------------------------------------------+

.. versionadded:: 4.0.0
