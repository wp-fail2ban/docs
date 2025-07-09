.. _WPF2B_EVENT_WAF_UPDATE_OPTION:

WPF2B_EVENT_WAF_UPDATE_OPTION
-----------------------------

.. rubric:: Unauthorised call to ``update_option()`` detected.
.. rubric:: *Premium only*

+-----------+-----------+-------------------------------------------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                                                                         |
|           +-----------+-------------------------------------------------------------------------------------------------------+
|           | Level     | WARNING if enabled, NOTICE if logging only                                                            |
|           +-----------+-------------------------------------------------------------------------------------------------------+
|           | Example   | ``WAF blocked update_option(marvin-gpp)="happy" on fqdn.example.com from 192.0.42.1``                 |
+-----------+-----------+-------------------------------------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-wpf2b-waf`                                                                    |
|           +-----------+-------------------------------------------------------------------------------------------------------+
|           | Rule      | ``update_option\(<F-OPTION_NAME>.*?</F-OPTION_NAME>\)="<F-OPTION_VALUE>.*</F-OPTION_VALUE>"<_tail>``  |
|           |           |                                                                                                       |
|           |           | <option_name>                                                                                         |
|           |           |   Name of the core WordPress option being updated.                                                    |
|           |           | <option_value>                                                                                        |
|           |           |   The JSON-encoded value being set. The following options are used for encoding:                      |
|           |           |                                                                                                       |
|           |           |   * JSON_NUMERIC_CHECK                                                                                |
|           |           |   * JSON_UNESCAPED_SLASHES                                                                            |
|           |           |   * JSON_PRESERVE_ZERO_FRACTION                                                                       |
|           |           |   * JSON_INVALID_UTF8_SUBSTITUTE                                                                      |
+-----------+-----------+-------------------------------------------------------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-OPTION_NAME`` and ``F-OPTION_VALUE`` tags.
.. versionadded:: 5.1.0
   Experimental.
