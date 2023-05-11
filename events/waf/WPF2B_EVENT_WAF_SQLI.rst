.. _WPF2B_EVENT_WAF_SQLI:

WPF2B_EVENT_WAF_SQLI
--------------------

.. rubric:: SQLi detected.
.. rubric:: *Premium only*

+----------+----------+------------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                  |
|          +----------+------------------------------------------------+
|          | Level    | WARNING if enabled, NOTICE if logging only     |
+----------+----------+------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                     |
|          +----------+------------------------------------------------+
|          | Rule     | ``SQLi blocked from <HOST>``                   |
+----------+----------+------------------------------------------------+

.. versionadded:: 5.1.0
