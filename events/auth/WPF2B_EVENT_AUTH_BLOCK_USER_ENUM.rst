.. _WPF2B_EVENT_AUTH_BLOCK_USER_ENUM:

WPF2B_EVENT_AUTH_BLOCK_USER_ENUM
--------------------------------

.. rubric:: Blocked user enumeration.

+-----------+-----------+---------------------------------------------------------------------------+
| syslog    | Facility  | .. include:: ../facility_log_auth.rst                                     |
|           +-----------+---------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                          |
|           +-----------+---------------------------------------------------------------------------+
|           | Example   | ``Blocked user enumeration attempt on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+---------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                             |
|           +-----------+---------------------------------------------------------------------------+
|           | Rule      | ``Blocked user enumeration attempt<_tail>``                               |
+-----------+-----------+---------------------------------------------------------------------------+


.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   | :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`

.. rubric:: History
.. versionadded:: 4.3.0