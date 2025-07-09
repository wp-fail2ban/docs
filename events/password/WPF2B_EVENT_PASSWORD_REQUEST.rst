.. _WPF2B_EVENT_PASSWORD_REQUEST:

WPF2B_EVENT_PASSWORD_REQUEST
----------------------------

.. rubric:: Password reset request.

+------------+-----------+----------------------------------------------------------------------------------+
| syslog     | Facility  | :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`                                          |
|            +-----------+----------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                 |
|            +-----------+----------------------------------------------------------------------------------+
|            | Example   | ``Password reset requested for Gargravarr on fqdn.example.com from 192.0.42.1``  |
+------------+-----------+----------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-extra`                                                   |
|            +-----------+----------------------------------------------------------------------------------+
|            | Rule      | ``Password reset requested for <F-ALT_USER>.*</F-ALT_USER><_tail>``              |
+------------+-----------+------------------------------------+---------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst  | .. include:: ../username-description.rst    |
+------------+-----------+------------------------------------+---------------------------------------------+


.. seealso::
   | :ref:`fail2ban_filters_tags`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ALT_USER`` tag.
.. versionadded:: 4.0.0
