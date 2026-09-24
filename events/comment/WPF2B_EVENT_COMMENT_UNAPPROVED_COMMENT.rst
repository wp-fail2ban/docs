.. _WPF2B_EVENT_COMMENT_UNAPPROVED_COMMENT:

WPF2B_EVENT_COMMENT_UNAPPROVED_COMMENT
--------------------------------------

.. rubric:: Attempted comment on an unapproved comment (reply).

Premium listener: ``WPF2B_EVENT_COMMENT_UNAPPROVED_COMMENT``.

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
     - ``Comment attempt on <F-POST_STATUS>unapproved comment</F-POST_STATUS> <F-COMMENT_ID>\d+</F-COMMENT_ID> on post <F-POST_ID>\d+</F-POST_ID>``
   * - EventData
     - ref_id
     - Post ID. The parent comment ID is in ``waf_data.comment_parent``.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`feature-comment-attempts`

.. rubric:: History
.. versionadded:: 6.0.0
