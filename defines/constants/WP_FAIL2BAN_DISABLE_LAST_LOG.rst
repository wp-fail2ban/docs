.. _WP_FAIL2BAN_DISABLE_LAST_LOG:

WP_FAIL2BAN_DISABLE_LAST_LOG
----------------------------

.. versionadded:: 4.3.0

*WPf2b* v4.3.0 introduced a new dashboard widget to display the last 5 ``syslog`` messages.

These messages are stored in the options table; for most sites this won't be an issue, but, if you're already doing a lot of updates to the options table or have some other esoteric configuration, you might want to disable this feature:

.. code-block:: php

   define('WP_FAIL2BAN_DISABLE_LAST_LOG', true);

