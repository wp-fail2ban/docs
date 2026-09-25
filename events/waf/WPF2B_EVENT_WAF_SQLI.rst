.. _WPF2B_EVENT_WAF_SQLI:

WPF2B_EVENT_WAF_SQLI
--------------------

.. rubric:: SQLi detected.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_WAF_SQLI``.

+-----------+-----------+------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                              |
|           +-----------+------------------------------------------------------------+
|           | Level     | WARNING                                                    |
|           +-----------+------------------------------------------------------------+
|           | Example   | ``WAF[blocked] SQLi ...``                                  |
+-----------+-----------+------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-wpf2b-waf`                         |
|           +-----------+------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/waf-sqli.rst.inc|
+-----------+-----------+------------------------------------------------------------+

.. include:: waf-event-common.rst.inc

EventData detail contains the full SQL.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`

.. rubric:: History
.. versionchanged:: 6.0.0
   Reworded the event.
.. versionadded:: 5.1.0
   Experimental.
