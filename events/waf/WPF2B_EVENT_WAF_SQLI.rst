.. _WPF2B_EVENT_WAF_SQLI:

WPF2B_EVENT_WAF_SQLI
--------------------

.. rubric:: SQLi detected.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_WAF_SQLI``.

Premium emits this event when SQL injection protection determines that request
input changed the structure of a query sent through WordPress's database
interface.

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

EventData ``waf_data.sql`` contains the full query, which can include
credentials or other sensitive information.

.. seealso::
   | :ref:`feature-waf-sqli`
   | :ref:`WPF2B_EVENT_WAF_ERROR`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`
   | :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS`
   | :ref:`WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS`

.. rubric:: History
.. versionchanged:: 6.0.0
   Reworded the event.
.. versionadded:: 5.1.0
   Experimental.
