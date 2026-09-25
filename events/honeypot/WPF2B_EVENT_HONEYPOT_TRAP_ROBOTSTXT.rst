.. _WPF2B_EVENT_HONEYPOT_TRAP_ROBOTSTXT:

WPF2B_EVENT_HONEYPOT_TRAP_ROBOTSTXT
-----------------------------------

.. rubric:: Attempted access to fake ``robots.txt`` entry.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_HONEYPOT_TRAP_ROBOTSTXT``.

+------------+-----------+----------------------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_honeypot_log.rst                                                          |
|            +-----------+----------------------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                                   |
|            +-----------+----------------------------------------------------------------------------------------------------+
|            | Example   | ``Attempted access to honeypot (robots.txt: /phpinfo.php) on fqdn.example.com from 192.0.42.1``    |
+------------+-----------+----------------------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-hard`                                                                      |
|            +-----------+----------------------------------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/honeypot-robots.rst.inc                                 |
+------------+-----------+---------------+-------------+----------------------------------------------------------------------+
| EventData  | waf_data  | request_path  | ``string``  | Matching ``robots.txt`` entry.                                       |
+------------+-----------+---------------+-------------+----------------------------------------------------------------------+

.. seealso::
   | :ref:`WP_FAIL2BAN_EX_HONEYPOT`
   | :ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT`

.. rubric:: History
.. versionadded:: 6.0.0
