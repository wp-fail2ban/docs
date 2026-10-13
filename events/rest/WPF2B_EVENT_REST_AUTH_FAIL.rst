.. _WPF2B_EVENT_REST_AUTH_FAIL:

WPF2B_EVENT_REST_AUTH_FAIL
--------------------------

.. rubric:: REST authentication failed.

Premium listener: ``WPF2B_EVENT_REST_AUTH_FAIL``.

Premium emits this event when WordPress reports failed REST authentication to
|WPf2b|. Failed Application Password authentication over REST is included.
An unknown identifier is a hard failure; a failure for an existing account is
soft.

+------------+---------------------+-------------------------------------------------------------------------------------------------------------------------+
| syslog     | Facility            | .. include:: ../facility_log_auth.rst                                                                                   |
|            +---------------------+-------------------------------------------------------------------------------------------------------------------------+
|            | Level               | .. include:: ../level_notice.rst                                                                                        |
|            +---------------------+-------------------------------------------------------------------------------------------------------------------------+
|            | Examples            | ``REST authentication failure for Arthur`` |br|                                                                         |
|            |                     | ``REST authentication attempt for unknown user Agrajag``                                                                |
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
.. versionchanged:: 6.3.0
   Includes failed REST Application Password authentication; Premium captures
   its submitted password when available.
.. versionadded:: 4.1.0
