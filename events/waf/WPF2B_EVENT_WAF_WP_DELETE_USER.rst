.. _WPF2B_EVENT_WAF_WP_DELETE_USER:

WPF2B_EVENT_WAF_WP_DELETE_USER
------------------------------

.. rubric:: Attempt to delete a user.
.. rubric:: *Premium only*

+-----------+-----------+------------------------------------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                                                                  |
|           +-----------+------------------------------------------------------------------------------------------------+
|           | Level     | WARNING if enabled, NOTICE if logging only                                                     |
|           +-----------+------------------------------------------------------------------------------------------------+
|           | Example   | ``WAF blocked attempt to delete user Arthur (42) on fqdn.example.com from 192.0.42.1``         |
+-----------+-----------+------------------------------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-wpf2b-waf`                                                             |
|           +-----------+------------------------------------------------------------------------------------------------+
|           | Rule      | ``wp_delete_user\(<F-ALT_USER_ID>\d+</F-ALT_USER_ID>\)="<F-ALT_USER>.*</F-ALT_USER>"<_tail>``  |
+-----------+-----------+------------------------------------------------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`

.. rubric:: History
.. versionchanged:: 6.0.0
   Reworded the rule; added ``F-ALT_USER_ID`` and ``F-ALT_USER`` tags.
.. versionadded:: 5.2.0
   Experimental.