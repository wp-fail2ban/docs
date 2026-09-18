.. _feature-comment-attempts:

Comment attempts
================

Logs attempts to comment on posts that cannot receive comments: missing, closed, trash, draft, password-protected, or (on the classic comment form only) an unapproved parent comment. Soft filter. Covers the classic comment form, REST comment creation, and XML-RPC ``wp.newComment``. Pingback faults are handled by pingback logging, not this feature.

The individual control is **Comment attempts** on the Logging tab in Advanced settings.

.. include:: ../autogen/join/feature-comment-attempts.rst
   :end-before: Source
