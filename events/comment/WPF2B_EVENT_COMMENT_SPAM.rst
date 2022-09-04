.. _WPF2B_EVENT_COMMENT_SPAM:

WPF2B_EVENT_COMMENT_SPAM
------------------------

.. rubric:: Comment marked as spam.

+----------+----------+----------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_SPAM_LOG`      |
|          +----------+----------------------------------+
|          | Level    | NOTICE                           |
+----------+----------+----------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`       |
|          +----------+----------------------------------+
|          | Rule     | ``Spam comment \d+ from <HOST>`` |
+----------+----------+----------------------------------+
