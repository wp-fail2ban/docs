.. _feature-comments:

Comments
========

Comment activity is split between submissions WordPress stores and attempts that leave nothing for a moderator to review. Recording both gives an operator a source-attributed history of accepted discussion and visibility of repeated submissions to unavailable content. |WPf2b| can log ordinary stored comments and those rejected attempts. Spam classification and XML-RPC pingbacks have separate signals; see :ref:`feature-spam` and :ref:`feature-pingbacks`.

.. toctree::
   :maxdepth: 1

   comment-attempts
   trackbacks

.. _feature-comments-logging:

Comment logging
---------------

An informational record of a stored comment lets an operator correlate the comment with its source without treating ordinary participation as hostile. :ref:`WP_FAIL2BAN_LOG_COMMENTS` enables this stored-comment evidence as a whole. When enabled, each ordinary comment stored by WordPress produces one extra-filter message with its comment ID, whatever its approval status. This covers classic, REST, and XML-RPC comment creation. Later approval does not create another comment-logging message. Pingbacks and trackbacks use their own messages. This record does not itself signal abuse or impose a ban.

The individual control is on the Logging tab in Advanced settings; Free displays it as read-only.

.. include:: ../autogen/join/feature-comments.rst
   :end-before: Source
