.. _WP_FAIL2BAN_TRUNCATE_HOST:

WP_FAIL2BAN_TRUNCATE_HOST
-------------------------

.. versionadded:: 3.5.0

If you've set :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` and defining :ref:`WP_FAIL2BAN_HTTP_HOST` for each virtual host isn't appropriate, you can set **WP_FAIL2BAN_TRUNCATE_HOST** to whatever value you need to make `syslog` happy:

.. code-block:: php

	define('WP_FAIL2BAN_TRUNCATE_HOST', 8);

This does exactly what the name suggests: truncates the host name to the length you specify. As a result there's no guarantee that what's left will be enough to identify the site.

