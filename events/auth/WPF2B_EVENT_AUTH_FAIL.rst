.. include:: ../../global.rst

.. _WPF2B_EVENT_AUTH_FAIL:

WPF2B_EVENT_AUTH_FAIL
---------------------

.. rubric:: Authentication failed.

+------------+-----------+-------------------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                                           |
|            +-----------+-------------------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                                |
|            +-----------+-------------------------------------------------------------------------------------------------+
|            | Examples  | ``Authentication failure for Arthur on fqdn.example.com from 192.0.42.1`` |br|                  |
|            |           | ``Authentication attempt for unknown user Agrajag on fqdn.example.com from 192.0.42.1``         |
+------------+-----------+-------------------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-soft`                                                                   |
|            +-----------+-------------------------------------------------------------------------------------------------+
|            | Rule      | ``Authentication (?:failure for|attempt for unknown user) <F-ALT_USER>.*</F-ALT_USER><_tail>``  |
+------------+-----------+-----------------------------------+-------------------------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst                    |
+------------+-----------+-----------------------------------+-------------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ALT_USER`` tag.
.. versionadded:: 4.0.0
