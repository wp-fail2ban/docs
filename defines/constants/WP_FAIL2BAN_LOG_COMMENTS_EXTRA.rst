.. _WP_FAIL2BAN_LOG_COMMENTS_EXTRA:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_COMMENTS_EXTRA
------------------------------

.. rubric:: Log extra comment events.
.. include:: default-disabled.rst

.. versionadded:: 4.0.0
.. deprecated:: 5.0.0
   See :ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS`

----

.. note::
   This constant has been deprecated in favor of :ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS`.

Enables logging of specific comment-related events. The events are specified using event constants that must be OR'ed together.

.. code-block:: php
   :caption: Example: Enable logging for 'Closed' and 'Draft' posts

   include __DIR__.'/wp-content/plugins/wp-fail2ban/lib/constants.php';

   /**
    * Log comments on 'Closed' and 'Draft' posts
    */
   define('WP_FAIL2BAN_LOG_COMMENTS_EXTRA', WPF2B_EVENT_COMMENT_CLOSED | WPF2B_EVENT_COMMENT_DRAFT);

The following events can be logged:

+--------------------------------+--------------------------------------------------+
| Event Constant                 | Description                                      |
+================================+==================================================+
| WPF2B_EVENT_COMMENT_NOT_FOUND  | Attempted comment on a non-existent post         |
+--------------------------------+--------------------------------------------------+
| WPF2B_EVENT_COMMENT_CLOSED     | Attempted comment on a post with closed comments |
+--------------------------------+--------------------------------------------------+
| WPF2B_EVENT_COMMENT_TRASH      | Attempted comment on a post in Trash             |
+--------------------------------+--------------------------------------------------+
| WPF2B_EVENT_COMMENT_DRAFT      | Attempted comment on a Draft post                |
+--------------------------------+--------------------------------------------------+
| WPF2B_EVENT_COMMENT_PASSWORD   | Attempted comment on a password-protected post   |
+--------------------------------+--------------------------------------------------+

.. seealso::
   * :ref:`WP_FAIL2BAN_COMMENT_LOG`
   * :ref:`wordpress-extra_conf`

