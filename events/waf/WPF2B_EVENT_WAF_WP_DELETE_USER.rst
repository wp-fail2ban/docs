.. _WPF2B_EVENT_WAF_WP_DELETE_USER:

WPF2B_EVENT_WAF_WP_DELETE_USER
------------------------------

.. rubric:: Attempt to delete a user.
.. rubric:: *Premium only*

+----------+----------+--------------------------------------------------------------+
| syslog   | Facility | :ref:`WP_FAIL2BAN_EX_WAF_LOG`                                |
|          +----------+--------------------------------------------------------------+
|          | Level    | WARNING if enabled, NOTICE if logging only                   |
+----------+----------+--------------------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-wpf2b-waf_conf`                              |
|          +----------+--------------------------------------------------------------+
|          | Rule     | ``WAF wp_delete_user(<user_id>)="<user_login>" from <HOST>`` |
+----------+----------+--------------------------------------------------------------+

.. versionadded:: 5.2.0
