.. _WPF2B_EVENT_COMMENT:

WPF2B_EVENT_COMMENT
-------------------

.. rubric:: Comment submitted.

+------------+-----------+------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_comment_log.rst             |
|            +-----------+------------------------------------------------------+
|            | Level     | .. include:: ../level_info.rst                       |
|            +-----------+------------------------------------------------------+
|            | Example   | ``Comment 42 on fqdn.example.com from 192.0.42.1``   |
+------------+-----------+------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-extra`                       |
|            +-----------+------------------------------------------------------+
|            | Rule      | ``Comment <F-COMMENT_ID>\d+</F-COMMENT_ID><_tail>``  |
+------------+-----------+----------------------------------+-------------------+
| EventData  | ref_id    | .. include:: ../ref_id-type.rst  | Comment ID        |
+------------+-----------+----------------------------------+-------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``COMMENT_ID`` tag.
.. versionadded:: 4.0.0