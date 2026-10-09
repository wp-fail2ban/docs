.. _feature-comment-attempts:

Comment attempts
================

Comment-attempt logging writes a message when WordPress rejects a submission before storing a comment. A fail2ban jail can then count clients that repeatedly submit to missing, closed, or otherwise unavailable posts, even though no comment appears for a moderator to review.

:ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS` enables all of these rejected-comment messages. It covers missing, closed, trashed, draft, and password-protected posts through the classic form, REST creation, and XML-RPC comment creation. A reply to an unapproved parent comment is additionally covered on the classic form. These messages can match the soft filter; the jail decides whether repeated matches lead to a ban.

.. include:: ../autogen/join/feature-comment-attempts.rst
   :end-before: Source
