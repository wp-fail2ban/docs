.. _WPF2B_EVENT_AUTH_FAIL:

WPF2B_EVENT_AUTH_FAIL
---------------------

.. rubric:: Authentication failed.

Premium listener: ``WPF2B_EVENT_AUTH_FAIL``.

Premium emits this event for a failed form authentication that reaches
WordPress's ``wp_login_failed`` action.

REST and XML-RPC failures use
:ref:`WPF2B_EVENT_REST_AUTH_FAIL` and :ref:`WPF2B_EVENT_XMLRPC_AUTH_FAIL`;
blank login-form credentials use :ref:`WPF2B_EVENT_AUTH_EMPTY_USER` or
:ref:`WPF2B_EVENT_AUTH_EMPTY_PASS`.

+------------+-----------+--------------------------------------------------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                                                                          |
|            +-----------+--------------------------------------------------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                                                               |
|            +-----------+--------------------------------------------------------------------------------------------------------------------------------+
|            | Examples  | ``Authentication failure for Arthur on fqdn.example.com from 192.0.42.1`` |br|                                                 |
|            |           | ``Authentication attempt for unknown user Agrajag on fqdn.example.com from 192.0.42.1``                                        |
+------------+-----------+--------------------------------------------------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-soft`                                                                                                  |
|            +-----------+--------------------------------------------------------------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/auth-failure.rst.inc                                                                |
+------------+-----------+-----------------------------------+--------------------------------------------------------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst                                                   |
|            +-----------+-----------------------------------+--------------------------------------------------------------------------------------------+
|            | password  | .. include:: ../password-type.rst | .. include:: ../password-description.rst                                                   |
+------------+-----------+-----------------------------------+--------------------------------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-login-logging`
   | :ref:`WPF2B_EVENT_REST_AUTH_FAIL`
   | :ref:`WPF2B_EVENT_XMLRPC_AUTH_FAIL`
   | :ref:`WPF2B_EVENT_AUTH_EMPTY_USER`
   | :ref:`WPF2B_EVENT_AUTH_EMPTY_PASS`
   | :ref:`fail2ban_filters_tags`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ALT_USER`` tag.
.. versionadded:: 4.0.0
