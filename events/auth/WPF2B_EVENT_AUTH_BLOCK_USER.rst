.. _WPF2B_EVENT_AUTH_BLOCK_USER:

WPF2B_EVENT_AUTH_BLOCK_USER
---------------------------

.. rubric:: Blocked username.

+------------+-----------+--------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                                |
|            +-----------+--------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                     |
|            +-----------+--------------------------------------------------------------------------------------+
|            | Example   | ``Blocked authentication attempt for Trillian on fqdn.example.com from 192.0.42.1``  |
+------------+-----------+--------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-hard`                                                        |
|            +-----------+--------------------------------------------------------------------------------------+
|            | Rule      | ``Blocked authentication attempt for <F-ALT_USER>.*</F-ALT_USER><_tail>``            |
+------------+-----------+-----------------------------------+--------------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst         |
|            +-----------+-----------------------------------+--------------------------------------------------+
|            | password  | .. include:: ../password-type.rst | .. include:: ../password-description.rst         |
+------------+-----------+-----------------------------------+--------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   | :ref:`WP_FAIL2BAN_BLOCKED_USERS`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ALT_USER`` tag.
.. versionadded:: 4.3.0
