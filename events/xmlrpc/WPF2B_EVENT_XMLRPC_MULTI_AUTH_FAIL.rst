.. _WPF2B_EVENT_XMLRPC_MULTI_AUTH_FAIL:

WPF2B_EVENT_XMLRPC_MULTI_AUTH_FAIL
----------------------------------

.. rubric:: XML-RPC ``system.multicall`` authentication failure.

Premium listener: ``WPF2B_EVENT_XMLRPC_MULTI_AUTH_FAIL``.

Premium emits this event on the second authentication failure in a single
XML-RPC request. |WPf2b| then terminates the request.

+------------+-----------+-------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                   |
|            +-----------+-------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                        |
|            +-----------+-------------------------------------------------------------------------+
|            | Example   | ``XML-RPC multicall authentication failure on fqdn.example.com          |
|            |           | from 192.0.42.1``                                                       |
+------------+-----------+-------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-hard`                                           |
|            +-----------+-------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/xmlrpc-multicall-auth.rst.inc|
+------------+-----------+-------------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-xmlrpc`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WPF2B_EVENT_XMLRPC_AUTH_FAIL`

.. rubric:: History
.. versionadded:: 3.0.0
