.. _WPF2B_EVENT_WAF_UPDATE_OPTION:

WPF2B_EVENT_WAF_UPDATE_OPTION
-----------------------------

.. rubric:: Unauthorised protected-option update detected.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_WAF_UPDATE_OPTION``.

Premium emits this event when option protection detects an update to a
protected site or network option that is not authorised or exempt.

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

EventData ``waf_data`` contains the option name in ``option_name`` and the full
new value in ``option_value``. The value can contain credentials or other
sensitive information.

.. seealso::
   | :ref:`feature-waf-update-option`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`
   | :ref:`WP_FAIL2BAN_EX_WAF_UPDATE_OPTION`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-OPTION_NAME`` and ``F-OPTION_VALUE`` tags.
.. versionadded:: 5.1.0
   Experimental.
