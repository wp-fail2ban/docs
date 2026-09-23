.. _feature-comment-attempts:

Comment attempts
================

Automated clients can keep submitting to missing, closed, or otherwise unavailable posts even though no comment appears for a moderator to review. Comment-attempt logging makes that otherwise easy-to-miss activity available as evidence, allowing a jail to recognise a source that repeatedly targets content which cannot accept the proposed comment. :ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS` enables the rejected-attempt evidence as one group. It covers missing, closed, trashed, draft, and password-protected posts through the classic form, REST creation, and XML-RPC comment creation. A reply to an unapproved parent comment is additionally covered on the classic form. These attempts can match the soft filter; a match alone does not ban an address.

Pingback faults have separate evidence under :ref:`feature-pingbacks`. The individual **Comment attempts** control is on the Logging tab in Advanced settings; Free displays it as read-only.

.. include:: ../autogen/join/feature-comment-attempts.rst
   :end-before: Source
