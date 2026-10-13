.. _WPF2B_EVENT_WAF_ERROR:

WPF2B_EVENT_WAF_ERROR
---------------------

.. rubric:: WAF error.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_WAF_ERROR``.

Premium emits this event when SQL injection analysis cannot determine whether
request input changed the SQL structure. The query continues; this event
establishes neither a SQL injection detection nor a clean query.

+----------+-----------+------------------------------------------------+
| syslog   | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                  |
|          +-----------+------------------------------------------------+
|          | Level     | WARNING                                        |
|          +-----------+------------------------------------------------+
|          | Prefix    | ``WAF[error]``                                 |
+----------+-----------+------------------------------------------------+

.. include:: waf-event-common.rst.inc

EventData ``waf_data`` contains ``msg`` with the analysis error and ``sql``
with the full query. The query can contain credentials or other sensitive
information.

.. seealso::
   | :ref:`feature-waf-sqli`
   | :ref:`WPF2B_EVENT_WAF_SQLI`
   | :ref:`WP_FAIL2BAN_EX_WAF`
   | :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS`
   | :ref:`WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS`

.. versionadded:: 5.1.0
   Experimental.
