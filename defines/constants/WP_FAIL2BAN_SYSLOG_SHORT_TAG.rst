.. _WP_FAIL2BAN_SYSLOG_SHORT_TAG:

WP_FAIL2BAN_SYSLOG_SHORT_TAG
----------------------------

.. versionadded:: 3.0.0

Some flavours of Linux come with a `syslogd` that can't cope with the normal message format *WPf2b* uses; basically, they assume that the first part of the message (the tag) won't exceed some (small) number of characters, and mangle the message if it does. This breaks the regex in the *fail2ban* filter and so nothing gets blocked.

Adding:

.. code-block:: php

	define('WP_FAIL2BAN_SYSLOG_SHORT_TAG', true);

to ``functions.php`` will make *WPf2b* use ``wp`` as the syslog tag, rather than the normal ``wordpress``. This buys you 7 characters which may be enough to work around the problem, but if it's not enough you should look at :ref:`WP_FAIL2BAN_HTTP_HOST` or :ref:`WP_FAIL2BAN_TRUNCATE_HOST` too.

