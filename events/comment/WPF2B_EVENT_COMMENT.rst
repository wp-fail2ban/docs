.. _WPF2B_EVENT_COMMENT:

WPF2B_EVENT_COMMENT
-------------------

.. rubric:: Comment stored.

Premium listener: ``WPF2B_EVENT_COMMENT``.

Premium emits this event when WordPress stores an ordinary comment while
:ref:`WP_FAIL2BAN_LOG_COMMENTS` is enabled. It applies whether the comment is
approved, held for moderation, or marked as spam. Later approval changes do
not emit this event again.

:ref:`Pingbacks <feature-pingbacks>` and :ref:`trackbacks <feature-trackbacks>`
do not use this event. A stored comment classified as spam can separately emit
:ref:`WPF2B_EVENT_COMMENT_SPAM` when spam logging is enabled.

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
   | :ref:`feature-comments`
   | :ref:`WPF2B_EVENT_COMMENT_SPAM`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_COMMENTS`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``COMMENT_ID`` tag.
.. versionadded:: 4.0.0
