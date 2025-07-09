.. _WPF2B_EVENT_XMLRPC_PINGBACK_ERROR:

WPF2B_EVENT_XMLRPC_PINGBACK_ERROR
---------------------------------

.. rubric:: Pingback error.

+-----------+-----------+-----------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_PINGBACK_LOG`                                       |
|           +-----------+-----------------------------------------------------------------------+
|           | Level     | NOTICE                                                                |
|           +-----------+-----------------------------------------------------------------------+
|           | Example   | ``Pingback error 400 generated on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+-----------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                         |
|           +-----------+-----------------------------------------------------------------------+
|           | Rule      | ``Pingback error <F-ERRCODE>\d+</F-ERRCODE> generated<_tail>``        |
+-----------+-----------+-----------------------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ERRCODE`` tag.
.. versionadded:: 4.0.0
