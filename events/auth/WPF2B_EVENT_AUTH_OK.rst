.. _WPF2B_EVENT_AUTH_OK:

WPF2B_EVENT_AUTH_OK
-------------------

.. rubric:: Authentication OK.

+------------+-----------+-------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                         |
|            +-----------+-------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_info.rst                                                |
|            +-----------+-------------------------------------------------------------------------------+
|            | Example   | ``Accepted password for Arthur on fqdn.example.com from 192.0.42.1``          |
+------------+-----------+-------------------------------------------------------------------------------+
| fail2ban   | Filter    | *n/a*                                                                         |
|            +-----------+-------------------------------------------------------------------------------+
|            | Rule      | ``Accepted password for <F-ALT_USER>.*</F-ALT_USER><_tail>``                  |
+------------+-----------+-----------------------------------+-------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst  |
+------------+-----------+-----------------------------------+-------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ALT_USER`` tag.
.. versionadded:: 4.0.0
