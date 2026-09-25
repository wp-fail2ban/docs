.. _WPF2B_EVENT_AUTH_OK:

WPF2B_EVENT_AUTH_OK
-------------------

.. rubric:: Authentication OK.

Premium listener: ``WPF2B_EVENT_AUTH_OK``.

Recorded for a successful form login when :ref:`WP_FAIL2BAN_LOG_AUTH_SUCCESS` is enabled. REST and XML-RPC successes use :ref:`WPF2B_EVENT_REST_AUTH_OK` and :ref:`WPF2B_EVENT_XMLRPC_AUTH_OK`.

+------------+-----------+-------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                         |
|            +-----------+-------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_info.rst                                                |
|            +-----------+-------------------------------------------------------------------------------+
|            | Example   | ``Accepted password for Arthur on fqdn.example.com from 192.0.42.1``          |
+------------+-----------+-------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-good`                                                 |
|            +-----------+-------------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/auth-success.rst.inc               |
+------------+-----------+-----------------------------------+-------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst  |
+------------+-----------+-----------------------------------+-------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_AUTH_SUCCESS`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionchanged:: 6.3.0
   Recorded only when :ref:`WP_FAIL2BAN_LOG_AUTH_SUCCESS` is enabled.
.. versionchanged:: 6.0.0
   Added ``F-ALT_USER`` tag.
.. versionadded:: 4.0.0
