.. _WPF2B_EVENT_WAF_UPDATE_OPTION:

WPF2B_EVENT_WAF_UPDATE_OPTION
-----------------------------

.. rubric:: Unauthorised call to ``update_option()`` detected.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_WAF_UPDATE_OPTION``.

+-----------+-----------+-------------------------------------------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                                                                         |
|           +-----------+-------------------------------------------------------------------------------------------------------+
|           | Level     | WARNING                                                                                               |
|           +-----------+-------------------------------------------------------------------------------------------------------+
|           | Example   | ``WAF[blocked] update_option(marvin-gpp)="happy" on fqdn.example.com from 192.0.42.1``                |
+-----------+-----------+-------------------------------------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-wpf2b-waf`                                                                    |
|           +-----------+-------------------------------------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/waf-update-option.rst.inc                                  |
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

.. include:: waf-event-common.rst.inc

EventData detail contains the option name and full new value. The value can
contain credentials or other sensitive information.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-OPTION_NAME`` and ``F-OPTION_VALUE`` tags.
.. versionadded:: 5.1.0
   Experimental.
