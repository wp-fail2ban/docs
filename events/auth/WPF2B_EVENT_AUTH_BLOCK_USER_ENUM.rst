.. _WPF2B_EVENT_AUTH_BLOCK_USER_ENUM:

WPF2B_EVENT_AUTH_BLOCK_USER_ENUM
--------------------------------

.. rubric:: Blocked user enumeration.

Premium listener: ``WPF2B_EVENT_AUTH_BLOCK_USER_ENUM``.

Premium emits this event when :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION` blocks
a covered enumeration request through the common blocked-enumeration path. A
logged-in REST authors preload is blocked with a separate Debug message and
does not emit this event.

+-----------+-----------+---------------------------------------------------------------------------+
| syslog    | Facility  | .. include:: ../facility_log_auth.rst                                     |
|           +-----------+---------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                          |
|           +-----------+---------------------------------------------------------------------------+
|           | Example   | ``Blocked user enumeration attempt on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+---------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                             |
|           +-----------+---------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/user-enum.rst.inc              |
+-----------+-----------+---------------------------------------------------------------------------+


.. seealso::
   | :ref:`feature-user-enumeration`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`

.. rubric:: History
.. versionadded:: 4.3.0
