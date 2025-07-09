.. _WPF2B_EVENT_WAF_SQLI:

WPF2B_EVENT_WAF_SQLI
--------------------

.. rubric:: SQLi detected.
.. rubric:: *Premium only*

+-----------+-----------+-----------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                             |
|           +-----------+-----------------------------------------------------------+
|           | Level     | WARNING if enabled, NOTICE if logging only                |
|           +-----------+-----------------------------------------------------------+
|           | Example   | ``WAF blocked SQLi on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+-----------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-wpf2b-waf`                        |
|           +-----------+-----------------------------------------------------------+
|           | Rule      | ``SQLi<_tail>``                                           |
+-----------+-----------+-----------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`

.. rubric:: History
.. versionchanged:: 6.0.0
   Reworded the event.
.. versionadded:: 5.1.0
   Experimental.
