.. _feature-comments:

Comments
========

|WPf2b| can log successful and unsuccessful comments. Spam classification and XML-RPC pingbacks also have their own messages; see :ref:`feature-spam` and :ref:`feature-pingbacks`.

.. toctree::
   :maxdepth: 1

   comment-attempts
   trackbacks

.. _feature-comments-logging:

Comment logging
---------------

:ref:`WP_FAIL2BAN_LOG_COMMENTS` logs each ordinary comment when WordPress stores it, whether the comment is approved, held for moderation, or marked as spam. The informational message includes the comment ID, allowing an operator to match the log entry to the stored comment without classifying ordinary participation as hostile.

This covers comments created through the classic form, REST, and XML-RPC. Changing the approval status later does not produce another comment-logging message. Pingbacks and trackbacks use their own messages. Stored-comment messages can match the extra filter, but they do not mark the comment as abusive or ban its address.

The individual control is on the Logging tab in Advanced settings; Free displays it as read-only.

.. include:: ../autogen/join/feature-comments.rst
   :end-before: Source
