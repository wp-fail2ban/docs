.. _WPF2B_EVENT_COMMENT_UNAPPROVED_COMMENT:

WPF2B_EVENT_COMMENT_UNAPPROVED_COMMENT
--------------------------------------

.. rubric:: Attempted reply to an unapproved comment.

Premium listener: ``WPF2B_EVENT_COMMENT_UNAPPROVED_COMMENT``.

Premium emits this event when the classic comment form rejects a reply because
its parent comment has not been approved.
:ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS` enables this event.

.. list-table::
   :stub-columns: 1
   :widths: 12 18 70

   * - syslog
     - Facility
     - .. include:: ../facility_comment_extra_log.rst
   * -
     - Level
     - .. include:: ../level_notice.rst
   * -
     - Example
     - ``Comment attempt on unapproved comment 7 on post 42 on fqdn.example.com from 192.0.42.1``
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-soft`
   * -
     - Rule
     - .. include:: ../../autogen/filters.d/rules/comment-attempt.rst.inc
   * - EventData
     - ref_id
     - Post ID. The parent comment ID is in ``waf_data.comment_parent``.

.. seealso::
   | :ref:`feature-comment-attempts`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS`

.. rubric:: History
.. versionadded:: 6.0.0
