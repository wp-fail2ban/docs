.. _WPF2B_EVENT_XMLRPC_AUTH_OK:

WPF2B_EVENT_XMLRPC_AUTH_OK
--------------------------

.. rubric:: XML-RPC authentication OK.

Premium listener: ``WPF2B_EVENT_XMLRPC_AUTH_OK``.

Recorded when an XML-RPC request authenticates successfully and :ref:`WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS` is enabled. Application Password authentications over XML-RPC are included.

+------------+-----------+----------------------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                                              |
|            +-----------+----------------------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_info.rst                                                                     |
|            +-----------+----------------------------------------------------------------------------------------------------+
|            | Example   | ``XML-RPC authentication success for Arthur on fqdn.example.com from 192.0.42.1``                  |
+------------+-----------+----------------------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-good`                                                                      |
|            +-----------+----------------------------------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/auth-api-success.rst.inc                                |
+------------+-----------+-----------------------------------+----------------------------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst                       |
+------------+-----------+-----------------------------------+----------------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS`
   | :ref:`WPF2B_EVENT_AUTH_OK`

.. rubric:: History
.. versionchanged:: 6.3.0
   Distinct ``XML-RPC authentication success`` message; recorded when XML-RPC success logging is enabled.
.. versionadded:: 4.1.0
