.. _WPF2B_EVENT_COMMENT_SPAM:

WPF2B_EVENT_COMMENT_SPAM_AKISMET
--------------------------------

.. rubric:: Comment marked as spam.

+----------+----------+------------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_SPAM_LOG`                    |
|          +----------+------------------------------------------------+
|          | Level    | NOTICE                                         |
+----------+----------+------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                     |
|          +----------+------------------------------------------------+
|          | Rule     | ``Akismet discarded spam comment from <HOST>`` |
+----------+----------+------------------------------------------------+

.. versionadded:: 5.0.0
