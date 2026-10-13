.. _WPF2B_EVENT_XMLRPC_AUTH_FAIL:

WPF2B_EVENT_XMLRPC_AUTH_FAIL
----------------------------

.. rubric:: XML-RPC authentication failed.

Premium listener: ``WPF2B_EVENT_XMLRPC_AUTH_FAIL``.

Premium emits this event when WordPress reports failed XML-RPC authentication
to |WPf2b|. Failed Application Password authentication over XML-RPC is
included. An unknown identifier is a hard failure; a failure for an existing
account is soft.

+------------+---------------------+-------------------------------------------------------------------------------------------------------------------------+
| syslog     | Facility            | .. include:: ../facility_log_auth.rst                                                                                   |
|            +---------------------+-------------------------------------------------------------------------------------------------------------------------+
|            | Level               | .. include:: ../level_notice.rst                                                                                        |
|            +---------------------+-------------------------------------------------------------------------------------------------------------------------+
|            | Examples            | ``XML-RPC authentication failure for Arthur`` |br|                                                                      |
|            |                     | ``XML-RPC authentication attempt for unknown user Agrajag``                                                             |
+------------+---------------------+-------------------------------------------------------------------------------------------------------------------------+
| fail2ban   | Filter              | :ref:`filters-wordpress-hard` (unknown user) / :ref:`filters-wordpress-soft` (known user)                               |
|            +---------------------+-------------------------------------------------------------------------------------------------------------------------+
|            | Rule (unknown user) | .. include:: ../../autogen/filters.d/rules/auth-api-unknown.rst.inc                                                     |
|            +---------------------+-------------------------------------------------------------------------------------------------------------------------+
|            | Rule (known user)   | .. include:: ../../autogen/filters.d/rules/auth-api-failure.rst.inc                                                     |
+------------+---------------------+------------------------------------+------------------------------------------------------------------------------------+
| EventData  | username            | .. include:: ../username-type.rst  | .. include:: ../username-description.rst                                           |
|            +---------------------+------------------------------------+------------------------------------------------------------------------------------+
|            | password            | .. include:: ../password-type.rst  | .. include:: ../password-description.rst                                           |
+------------+---------------------+------------------------------------+------------------------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-login-logging`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WPF2B_EVENT_AUTH_FAIL`

.. rubric:: History
.. versionadded:: 4.1.0
