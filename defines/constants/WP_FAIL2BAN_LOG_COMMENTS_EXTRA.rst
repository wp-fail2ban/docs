.. _WP_FAIL2BAN_LOG_COMMENTS_EXTRA:

WP_FAIL2BAN_LOG_COMMENTS_EXTRA
------------------------------

.. versionadded:: 4.0.0

*WPf2b* can optionally log the following comment-related events:

Not found
   Attempted comment on a non-existent post

   .. rubric:: WPF2B_EVENT_COMMENT_NOT_FOUND

Closed
   Attempted comment on a post with closed comments

   .. rubric:: WPF2B_EVENT_COMMENT_CLOSED

Trash
   Attempted comment on a post in Trash

   .. rubric:: WPF2B_EVENT_COMMENT_TRASH

Draft
   Attempted comment on a Draft post

   .. rubric:: WPF2B_EVENT_COMMENT_DRAFT

Password-protected
   Attempted comment on a password-protected post

   .. rubric:: WPF2B_EVENT_COMMENT_PASSWORD


To enable this feature OR the event constants; for example, to enable `Closed` and `Draft`:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_COMMENTS_EXTRA', WPF2B_EVENT_COMMENT_CLOSED | WPF2B_EVENT_COMMENT_DRAFT);


The Post ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

