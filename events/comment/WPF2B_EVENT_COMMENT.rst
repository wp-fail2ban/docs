.. _WPF2B_EVENT_COMMENT:

WPF2B_EVENT_COMMENT
-------------------

.. rubric:: Comment stored.

Premium listener: ``WPF2B_EVENT_COMMENT``.

Ordinary comments only (not pingbacks or trackbacks). Logged once when WordPress stores the comment, for any approval status. Later approval does not emit a second event.

+------------+-----------+------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_comment_log.rst                         |
|            +-----------+------------------------------------------------------------------+
|            | Level     | .. include:: ../level_info.rst                                   |
|            +-----------+------------------------------------------------------------------+
|            | Example   | ``Comment 42 on fqdn.example.com from 192.0.42.1``               |
+------------+-----------+------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-extra`                                   |
|            +-----------+------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/comment-posted.rst.inc|
+------------+-----------+----------------------------------+-------------------------------+
| EventData  | ref_id    | .. include:: ../ref_id-type.rst  | Comment ID                    |
+------------+-----------+----------------------------------+-------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``COMMENT_ID`` tag.
.. versionadded:: 4.0.0
