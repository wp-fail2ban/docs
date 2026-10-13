.. _WPF2B_EVENT_COMMENT_SPAM:

WPF2B_EVENT_COMMENT_SPAM
------------------------

.. rubric:: Comment marked as spam.

Premium listener: ``WPF2B_EVENT_COMMENT_SPAM``.

Premium emits this event when a stored comment is classified as spam while
:ref:`WP_FAIL2BAN_LOG_SPAM` is enabled. It applies both when WordPress stores
the comment as spam and when the comment is marked as spam later.

If ordinary comment logging is also enabled, storing the same comment can
separately emit :ref:`WPF2B_EVENT_COMMENT`.

The address is the comment author's stored IP. When a moderator marks an
existing comment as spam, that stored address is used rather than the
moderator's request address.

Comments discarded by Akismet instead use
:ref:`WPF2B_EVENT_COMMENT_SPAM_AKISMET` because they are not retained in
WordPress.

The message records the actual WordPress comment type in its
``F-COMMENT_TYPE`` capture; ``comment`` is one possible value.

+------------+-----------+-----------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_spam_log.rst                           |
|            +-----------+-----------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                |
|            +-----------+-----------------------------------------------------------------+
|            | Example   | ``Spam comment 42 on fqdn.example.com from 192.0.42.1``         |
+------------+-----------+-----------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-hard`                                   |
|            +-----------+-----------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/comment-spam.rst.inc |
+------------+-----------+-----------------------------------+-----------------------------+
| EventData  | ref_id    | .. include:: ../ref_id-type.rst   | Comment ID                  |
+------------+-----------+-----------------------------------+-----------------------------+

.. seealso::
   | :ref:`feature-spam`
   | :ref:`WPF2B_EVENT_COMMENT`
   | :ref:`WPF2B_EVENT_COMMENT_SPAM_AKISMET`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_SPAM`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-COMMENT_TYPE`` and ``F-COMMENT_ID`` tags.
.. versionadded:: 4.0.0
