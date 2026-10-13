.. _WPF2B_EVENT_COMMENT_SPAM_AKISMET:

WPF2B_EVENT_COMMENT_SPAM_AKISMET
--------------------------------

.. rubric:: Comment discarded by Akismet as spam.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_COMMENT_SPAM_AKISMET``.

Premium emits this event when Akismet discards a comment as spam while
:ref:`WP_FAIL2BAN_LOG_SPAM` is enabled.

Spam comments retained in WordPress use :ref:`WPF2B_EVENT_COMMENT_SPAM`
instead. An Akismet discard has no stored comment ID, so its EventData
``ref_id`` value is null.

+-----------+-----------+-------------------------------------------------------------------------+
| syslog    | Facility  | .. include:: ../facility_spam_log.rst                                   |
|           +-----------+-------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                        |
|           +-----------+-------------------------------------------------------------------------+
|           | Example   | ``Akismet discarded spam comment on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+-------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                           |
|           +-----------+-------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/comment-spam-akismet.rst.inc |
+-----------+-----------+-------------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-spam`
   | :ref:`WPF2B_EVENT_COMMENT_SPAM`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_SPAM`

.. rubric:: History
.. versionadded:: 5.0.0
