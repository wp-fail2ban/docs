.. _WP_FAIL2BAN_LOG_COMMENTS_EXTRA:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_COMMENTS_EXTRA
------------------------------

.. rubric:: Log extra comment events.

.. versionadded:: 4.0.0

----

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


To enable this feature OR the event constants.

.. code-block:: php
   :caption: Example: enable `Closed` and `Draft`

   /**
    * Log comments on 'Closed' and 'Draft' posts
    */
   define('WP_FAIL2BAN_LOG_COMMENTS_EXTRA', WPF2B_EVENT_COMMENT_CLOSED | WPF2B_EVENT_COMMENT_DRAFT);

You **must** also load the constants *before* trying to use them. In `wp-config.php` add:

.. code-block:: php

  include __DIR__.'/wp-content/plugins/wp-fail2ban/lib/constants.php';

or for the Premium version:

.. code-block:: php

  include __DIR__.'/wp-content/plugins/wp-fail2ban-premium/lib/constants.php';

If you have non-standard paths, e.g. plugins in a different place, you'll need to adjust the `include` path to suit.

The Post ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

