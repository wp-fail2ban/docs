.. _WPF2B_EVENT_REST_AUTH_OK:

WPF2B_EVENT_REST_AUTH_OK
------------------------

.. rubric:: REST authentication OK.

Premium listener: ``WPF2B_EVENT_REST_AUTH_OK``.

Recorded when a REST request authenticates successfully and :ref:`WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS` is enabled. Application Password authentications over REST are included.

+------------+-----------+----------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                                  |
|            +-----------+----------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_info.rst                                                         |
|            +-----------+----------------------------------------------------------------------------------------+
|            | Example   | ``REST authentication success for Arthur on fqdn.example.com from 192.0.42.1``         |
+------------+-----------+----------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-good`                                                          |
|            +-----------+----------------------------------------------------------------------------------------+
|            | Rule      | ``(?:REST|XML-RPC) authentication success for <F-ALT_USER>.*</F-ALT_USER><_tail>``     |
+------------+-----------+-----------------------------------+----------------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst           |
+------------+-----------+-----------------------------------+----------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS`
   | :ref:`WPF2B_EVENT_AUTH_OK`

.. rubric:: History
.. versionchanged:: 6.3.0
   Distinct ``REST authentication success`` message; recorded when REST success logging is enabled.
.. versionadded:: 4.1.0
