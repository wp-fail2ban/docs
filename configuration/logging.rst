.. _configuration__logging:

Logging
-------

The key concept behind *WPf2b* is logging *Events* to ``syslog``. If *WPf2b* doesn't log an Event, or logs it to the wrong place, ``fail2ban`` won't work as it should. If in doubt go with the defaults - they should work for most systems, and once you understand how the pieces fit together you can revisit this.

.. _configuration__logging__choosing_events:

Choosing the Events to Log
^^^^^^^^^^^^^^^^^^^^^^^^^^

If you're unfamiliar with ``fail2ban`` and ``syslog`` I recommend **not** enabling any extra logging to start with - skip ahead to configuring :ref:`configuration__fail2ban`. *WPf2b* automatically handles the most important things with sensible defaults that should work for most systems.

Advanced Users
^^^^^^^^^^^^^^

Events
""""""

Over the years *WPf2b* has accumulated a lot of logging ability (and there're even more on the way):

+--------------------------------------------+-------------------------------------------+
| Event                                      | Reference                                 |
+============================================+===========================================+
| Auth OK                                    | :ref:`WP_FAIL2BAN_AUTH_LOG`               |
+--------------------------------------------+                                           +
| Auth Fail                                  |                                           |
+--------------------------------------------+-------------------------------------------+
| Blocked User                               | :ref:`WP_FAIL2BAN_BLOCKED_USERS`          |
+--------------------------------------------+-------------------------------------------+
| Blocked User Enumeration                   | :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION` |
+--------------------------------------------+-------------------------------------------+
| Comment                                    | :ref:`WP_FAIL2BAN_LOG_COMMENTS`           |
+--------------------------------------------+-------------------------------------------+
| Comment: Spam                              | :ref:`WP_FAIL2BAN_LOG_SPAM`               |
+--------------------------------------------+-------------------------------------------+
| Attempted Comment: Post not found          | :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`     |
+--------------------------------------------+-------------------------------------------+
| Attempted Comment: Closed post             | :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`     |
+--------------------------------------------+-------------------------------------------+
| Attempted Comment: Trash post              | :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`     |
+--------------------------------------------+-------------------------------------------+
| Attempted Comment: Draft post              | :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`     |
+--------------------------------------------+-------------------------------------------+
| Attempted Comment: Password-protected post | :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`     |
+--------------------------------------------+-------------------------------------------+
| Pingback                                   | :ref:`WP_FAIL2BAN_LOG_PINGBACKS`          |
+--------------------------------------------+-------------------------------------------+
| Pingback error                             | :ref:`WP_FAIL2BAN_PINGBACK_ERROR_LOG`     |
+--------------------------------------------+-------------------------------------------+

You should consider enabling *Comment: Spam* and *Attempted Comment: Closed post*, and, if you don't use WordPress's commenting system at all, you should enable **all** the *Attempted Comment* Events.


Facilities
""""""""""

By default, *WPf2b* uses the following ``syslog`` Facilities and *Levels*:

+----------------------------------+----------------------------+--------+
| What                             | Default                    | Level  |
+==================================+============================+========+
| Auth OK                          | :ref:`LOG_AUTH <LOG_AUTH>` | INFO   |
+----------------------------------+                            +--------+
| Auth Fail                        |                            | NOTICE |
+----------------------------------+                            +        |
| Blocked User                     |                            |        |
+----------------------------------+                            +        |
| Blocked User Enum                |                            |        |
+----------------------------------+----------------------------+--------+
| Comment                          | :ref:`LOG_USER <LOG_USER>` | INFO   |
+----------------------------------+----------------------------+--------+
| Comment: Spam                    | :ref:`LOG_AUTH <LOG_AUTH>` | NOTICE |
+----------------------------------+                            +        |
| Comment: Post not found          |                            |        |
+----------------------------------+                            +        |
| Comment: Closed post             |                            |        |
+----------------------------------+                            +        |
| Comment: Trash post              |                            |        |
+----------------------------------+                            +        |
| Comment: Draft post              |                            |        |
+----------------------------------+                            +        |
| Comment: Password-protected post |                            |        |
+----------------------------------+----------------------------+--------+
| Pingback                         | :ref:`LOG_USER <LOG_USER>` | INFO   |
+----------------------------------+----------------------------+--------+
| Pingback error                   | :ref:`LOG_AUTH <LOG_AUTH>` | NOTICE |
+----------------------------------+----------------------------+--------+

Unfortunately, there is no way of knowing *a priori* which Facility goes where. There is a table of default locations of :ref:`syslog_logfiles` for various OSs; if you're running something not listed there and you know where the various Facilities go, please either submit a PR on GitHub, or let me know in the `forum <https://forums.invis.net/c/wp-fail2ban-support/documentation>`_.

