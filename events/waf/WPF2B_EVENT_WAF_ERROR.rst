.. _WPF2B_EVENT_WAF_ERROR:

WPF2B_EVENT_WAF_ERROR
---------------------

.. rubric:: WAF error.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_WAF_ERROR``.

+----------+-----------+------------------------------------------------+
| syslog   | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                  |
|          +-----------+------------------------------------------------+
|          | Level     | WARNING                                        |
|          +-----------+------------------------------------------------+
|          | Prefix    | ``WAF[error]``                                 |
+----------+-----------+------------------------------------------------+

.. include:: waf-event-common.rst.inc

Recorded when SQL analysis cannot decide whether request input changed the SQL
structure. The query continues. This event establishes that the assessment
could not complete; it establishes neither a SQLi detection nor a clean query.

.. seealso::
   | :ref:`feature-waf-sqli`
   | :ref:`WP_FAIL2BAN_EX_WAF`

.. versionadded:: 5.1.0
   Experimental.
