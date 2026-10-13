.. _WPF2B_EVENT_COMMENT_DRAFT:

WPF2B_EVENT_COMMENT_DRAFT
-------------------------

.. rubric:: Attempted comment on a draft post.

Premium listener: ``WPF2B_EVENT_COMMENT_DRAFT``.

Premium emits this event when WordPress rejects a comment submission because
the target post is a draft. :ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS` enables
this event.

+------------+-----------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_comment_extra_log.rst                                                                                                         |
|            +-----------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                                                                                       |
|            +-----------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
|            | Example   | ``Comment attempt on draft post 42 on fqdn.example.com from 192.0.42.1``                                                                               |
+------------+-----------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-soft`                                                                                                                          |
|            +-----------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/comment-attempt.rst.inc                                                                                     |
+------------+-----------+-----------------------------------+--------------------------------------------------------------------------------------------------------------------+
| EventData  | ref_id    | .. include:: ../ref_id-type.rst   | Post ID                                                                                                            |
+------------+-----------+-----------------------------------+--------------------------------------------------------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-comment-attempts`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-POST_ID`` tag.
.. versionadded:: 4.0.0
