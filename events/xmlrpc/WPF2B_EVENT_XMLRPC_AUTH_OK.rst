.. _WPF2B_EVENT_XMLRPC_AUTH_OK:

WPF2B_EVENT_XMLRPC_AUTH_OK
--------------------------

.. rubric:: XML-RPC authentication OK.

Premium listener: ``WPF2B_EVENT_XMLRPC_AUTH_OK``.

Emitted from the same ``wp_login`` path as :ref:`WPF2B_EVENT_AUTH_OK` when the request is XML-RPC. The syslog line is the accepted-password message.

+------------+-----------+-------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                         |
|            +-----------+-------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_info.rst                                                |
|            +-----------+-------------------------------------------------------------------------------+
|            | Example   | ``Accepted password for Arthur on fqdn.example.com from 192.0.42.1``          |
+------------+-----------+-------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-good`                                                 |
|            +-----------+-------------------------------------------------------------------------------+
|            | Rule      | ``Accepted password for <F-ALT_USER>.*</F-ALT_USER><_tail>``                  |
+------------+-----------+-----------------------------------+-------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst  |
+------------+-----------+-----------------------------------+-------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WPF2B_EVENT_AUTH_OK`

.. rubric:: History
.. versionadded:: 4.1.0
