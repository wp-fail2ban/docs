.. _WPF2B_EVENT_WAF_UPDATE_OPTION:

WPF2B_EVENT_WAF_UPDATE_OPTION
-----------------------------

.. rubric:: Unauthorised call to ``update_option()`` detected.
.. rubric:: *Premium only*

+----------+----------+----------------------------------------------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                                                    |
+----------+----------+----------------------------------------------------------------------------------+
|          | Level    | WARNING if enabled, NOTICE if logging only                                       |
+----------+----------+----------------------------------------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                                                       |
+----------+----------+----------------------------------------------------------------------------------+
|          | Rule     | ``WAF: update_option(<option_name>)="<option_value>" from <HOST>``               |
|          |          |                                                                                  |
|          |          | <option_name>                                                                    |
|          |          |   Name of the core WordPress option being updated.                               |
|          |          | <option_value>                                                                   |
|          |          |   The JSON-encoded value being set. The following options are used for encoding: |
|          |          |                                                                                  |
|          |          |   * JSON_NUMERIC_CHECK                                                           |
|          |          |   * JSON_UNESCAPED_SLASHES                                                       |
|          |          |   * JSON_PRESERVE_ZERO_FRACTION                                                  |
|          |          |   * JSON_INVALID_UTF8_SUBSTITUTE                                                 |
+----------+----------+----------------------------------------------------------------------------------+

.. versionadded:: 5.1.0
