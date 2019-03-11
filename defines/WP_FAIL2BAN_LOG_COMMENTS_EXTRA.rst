.. _WP_FAIL2BAN_LOG_COMMENTS_EXTRA:

WP_FAIL2BAN_LOG_COMMENTS_EXTRA
------------------------------

.. versionadded:: 4.0.0

*WPf2b* can optionally log the following comment-related events:

Not found
   Attempted comment on a non-existent post

Closed
   Attempted comment on a post with closed comments

Trash
   Attempted comment on a post in Trash

Draft
   Attempted comment on a Draft post

Password-protected
   Attempted comment on a password-protected post

To enable this feature OR the Event IDs; for example, to enable `Closed` and `Draft`:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_COMMENTS_EXTRA', 0x00020004 | 0x00020010);


The Post ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

