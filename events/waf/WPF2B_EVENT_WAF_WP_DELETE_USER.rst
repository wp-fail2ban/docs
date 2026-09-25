.. _WPF2B_EVENT_WAF_WP_DELETE_USER:

WPF2B_EVENT_WAF_WP_DELETE_USER
------------------------------

.. rubric:: Attempt to delete a user.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_WAF_WP_DELETE_USER``.

+-----------+-----------+------------------------------------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                                                                  |
|           +-----------+------------------------------------------------------------------------------------------------+
|           | Level     | WARNING                                                                                        |
|           +-----------+------------------------------------------------------------------------------------------------+
|           | Example   | ``WAF[blocked] wp_delete_user(42)="Arthur" on fqdn.example.com from 192.0.42.1``               |
+-----------+-----------+------------------------------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-wpf2b-waf`                                                             |
|           +-----------+------------------------------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/waf-delete-user.rst.inc                             |
+-----------+-----------+------------------------------------------------------------------------------------------------+

.. include:: waf-event-common.rst.inc

EventData detail contains the user ID and username.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_WAF`

.. rubric:: History
.. versionchanged:: 6.0.0
   Reworded the rule; added ``F-ALT_USER_ID`` and ``F-ALT_USER`` tags.
.. versionadded:: 5.2.0
   Experimental.
