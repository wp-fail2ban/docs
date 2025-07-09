.. _WPF2B_EVENT_XMLRPC_PINGBACK_BOGUS:

WPF2B_EVENT_XMLRPC_PINGBACK_BOGUS
---------------------------------

.. rubric:: Bogus Pingback.
.. rubric:: *Premium only*

+-----------+-----------+---------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_PINGBACK_LOG`                         |
|           +-----------+---------------------------------------------------------+
|           | Level     | NOTICE                                                  |
+           +-----------+---------------------------------------------------------+
|           | Example   | ``Bogus Pingback on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+---------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                           |
|           +-----------+---------------------------------------------------------+
|           | Rule      | ``.*; Bogus Pingback<_tail>``                           |
+-----------+-----------+---------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`

.. rubric:: History
.. versionadded:: 4.0.0
