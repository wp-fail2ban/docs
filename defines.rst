.. _defines:

====================
`define()` Constants
====================



.. _WP_FAIL2BAN_AUTH_LOG:

WP_FAIL2BAN_AUTH_LOG
--------------------

.. versionadded:: 2.2.0

By default, *WPf2b* uses **LOG_AUTH** for logging authentication success or failure. However, some systems use **LOG_AUTHPRIV** instead, but there's no good run-time way to tell. If your system uses **LOG_AUTHPRIV** you should add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_AUTH_LOG', LOG_AUTHPRIV);



.. _WP_FAIL2BAN_BLOCK_USER_ENUMERATION:

WP_FAIL2BAN_BLOCK_USER_ENUMERATION
----------------------------------

.. versionadded:: 2.1.0
.. versionchanged:: 4.0.0
   Now also blocks enumeration via the REST API.

Brute-forcing WP requires knowing a valid username. Unfortunately, WP makes this all but trivial.

Based on a suggestion from *@geeklol* and a plugin by *@ROIBOT*, *WPf2b* can now block user enumeration attempts. Just add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_BLOCK_USER_ENUMERATION', true);

Premium
^^^^^^^

Event ID: ``0x00010008``



.. _WP_FAIL2BAN_BLOCKED_USERS:

WP_FAIL2BAN_BLOCKED_USERS
-------------------------

.. versionadded:: 2.0.0

The bots that try to brute-force WordPress logins aren't that clever (no doubt that will change), but they may only make one request per IP every few hours in an attempt to avoid things like `fail2ban`. With large botnets this can still create significant load.

Based on a suggestion from *@jmadea*, *WPf2b* now allows you to specify a regex that will shortcut the login process if the requested username matches.

For example, putting the following in ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_BLOCKED_USERS', '^admin$');

will block any attempt to log in as **admin** before most of the core WordPress code is run. Unless you go crazy with it, a regex is usually cheaper than a call to the database so this should help keep things running during an attack.

*WPf2b* doesn't do anything to the regex other than make it case-insensitive.

If you're running PHP 7, you can now specify an array of users instead:

.. code-block:: php

	define('WP_FAIL2BAN_BLOCKED_USERS', ['admin', 'another', 'user']);

Premium
^^^^^^^

Event ID: ``0x00010004``



.. _WP_FAIL2BAN_COMMENT_LOG:

WP_FAIL2BAN_COMMENT_LOG
-----------------------

.. versionadded:: 3.5.0

By default, *WPf2b* uses **LOG_USER** for logging comments. If you'd rather it used a different facility you can change it by adding something like the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_COMMENT_LOG', LOG_LOCAL3);

.. seealso:: :ref:`WP_FAIL2BAN_LOG_COMMENTS`.



.. _WP_FAIL2BAN_HTTP_HOST:

WP_FAIL2BAN_HTTP_HOST
---------------------

.. versionadded:: 3.0.0

This is for some flavours of Linux where :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` isn't enough.

If you configure your web server to set an environment variable named **WP_FAIL2BAN_SYSLOG_SHORT_TAG** on a per-virtual host basis, *WPf2b* will use that in the syslog tag. This allows you to configure a unique tag per site in a way that makes sense for your configuration, rather than some arbitrary truncation or hashing within the plugin.

.. note::

   This feature has not been tested as extensively as others. While I'm confident it works, FreeBSD doesn't have this problem so this feature will always be second-tier.



.. _WP_FAIL2BAN_LOG_COMMENTS:

WP_FAIL2BAN_LOG_COMMENTS
------------------------

.. versionadded:: 3.5.0

*WPf2b* can now log comments. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_COMMENTS', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

Premium
^^^^^^^

Event ID: ``0x00020000``

Database
""""""""

`ref_id` is the Comment ID.



.. _WP_FAIL2BAN_LOG_COMMENTS_EXTRA:

WP_FAIL2BAN_LOG_COMMENTS_EXTRA
------------------------------

.. versionadded:: 4.0.0

*WPf2b* can optionally log the following comment-related events:

Not found
   Attempted comment on a non-existent post

   Event ID: ``0x00020002``

Closed
   Attempted comment on a post with closed comments

   Event ID: ``0x00020004``

Trash
   Attempted comment on a post in Trash

   Event ID: ``0x00020008``

Draft
   Attempted comment on a Draft post

   Event ID: ``0x00020010``

Password-protected
   Attempted comment on a password-protected post

   Event ID: ``0x00020020``

To enable this feature OR the Event IDs; for example, to enable `Closed` and `Draft`:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_COMMENTS_EXTRA', 0x00020004 | 0x00020010);


The Post ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

Premium
^^^^^^^

The UI provides a set of checkboxes to enable these options.

Database
""""""""

`ref_id` is the Post ID.



.. _WP_FAIL2BAN_LOG_PASSWORD_REQUEST:

WP_FAIL2BAN_LOG_PASSWORD_REQUEST
--------------------------------

.. versionadded:: 3.5.0

*WPf2b* can log password reset requests. Add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_PASSWORD_REQUEST', true);

The username and IP will be written to :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG` and matched by :ref:`wordpress-extra_conf`.

Premium
^^^^^^^

Event ID: ``0x00080001``



.. _WP_FAIL2BAN_LOG_PINGBACKS:

WP_FAIL2BAN_LOG_PINGBACKS
-------------------------

.. versionadded:: 2.2.0

Based on a suggestion from *maghe*, *WPf2b* can now log pingbacks. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_PINGBACKS', true);

By default, *WPf2b* uses **LOG_USER** for logging pingbacks. If you'd rather it used a different facility you can change it by adding something like the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_PINGBACK_LOG', LOG_LOCAL3);

Premium
^^^^^^^

Event ID: ``0x00040001``



.. _WP_FAIL2BAN_LOG_SPAM:

WP_FAIL2BAN_LOG_SPAM
--------------------

.. versionadded:: 3.5.0

*WPf2b* can now log spam comments. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_SPAM', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_AUTH_LOG` and matched by :ref:`wordpress-hard_conf`.

Premium
^^^^^^^

Event ID: ``0x00020001``



.. _WP_FAIL2BAN_OPENLOG_OPTIONS:

WP_FAIL2BAN_OPENLOG_OPTIONS
---------------------------

.. versionadded:: 3.5.0



.. _WP_FAIL2BAN_PASSWORD_REQUEST_LOG:

WP_FAIL2BAN_PASSWORD_REQUEST_LOG
--------------------------------

.. versionadded:: 4.0.0




.. _WP_FAIL2BAN_PINGBACK_LOG:

WP_FAIL2BAN_PINGBACK_LOG
------------------------

.. versionadded:: 2.2.0

See :ref:`WP_FAIL2BAN_LOG_PINGBACKS`.


.. _WP_FAIL2BAN_PROXIES:

WP_FAIL2BAN_PROXIES
-------------------

.. versionadded:: 2.0.0
.. versionchanged:: 4.0.0
   Entries can be ignored by prefixing with **#**

The idea here is to list the IP addresses of the trusted proxies that will appear as the remote IP for the request. When defined:

* If the remote address appears in the **WP_FAIL2BAN_PROXIES** list, *WPf2b* will log the IP address from the `X-Forwarded-For` header
* If the remote address does not appear in the **WP_FAIL2BAN_PROXIES** list, *WPf2b* will return a 403 error
* If there's no `X-Forwarded-For` header, *WPf2b* will behave as if **WP_FAIL2BAN_PROXIES** isn't defined

To set **WP_FAIL2BAN_PROXIES**, add something like the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_PROXIES','192.168.0.42,192.168.42.0/24');

*WPf2b* doesn't do anything clever with the list - beware of typos!



.. _WP_FAIL2BAN_REMOTE_ADDR:

WP_FAIL2BAN_REMOTE_ADDR
-----------------------

.. versionadded:: 3.6.0

Some themes and plugins anonymise requests



.. _WP_FAIL2BAN_SPAM_LOG:

WP_FAIL2BAN_SPAM_LOG
--------------------

.. versionadded:: 4.0.0




.. _WP_FAIL2BAN_SYSLOG_SHORT_TAG:

WP_FAIL2BAN_SYSLOG_SHORT_TAG
----------------------------

.. versionadded:: 3.0.0

Some flavours of Linux come with a `syslogd` that can't cope with the normal message format *WPf2b* uses; basically, they assume that the first part of the message (the tag) won't exceed some (small) number of characters, and mangle the message if it does. This breaks the regex in the *fail2ban* filter and so nothing gets blocked.

Adding:

.. code-block:: php

	define('WP_FAIL2BAN_SYSLOG_SHORT_TAG', true);

to ``functions.php`` will make *WPf2b* use ``wp`` as the syslog tag, rather than the normal ``wordpress``. This buys you 7 characters which may be enough to work around the problem, but if it's not enough you should look at :ref:`WP_FAIL2BAN_HTTP_HOST` or :ref:`WP_FAIL2BAN_TRUNCATE_HOST` too.



.. _WP_FAIL2BAN_TRUNCATE_HOST:

WP_FAIL2BAN_TRUNCATE_HOST
-------------------------

.. versionadded:: 3.5.0

If you've set :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` and defining :ref:`WP_FAIL2BAN_HTTP_HOST` for each virtual host isn't appropriate, you can set **WP_FAIL2BAN_TRUNCATE_HOST** to whatever value you need to make `syslog` happy:

.. code-block:: php

	define('WP_FAIL2BAN_TRUNCATE_HOST', 8);

This does exactly what the name suggests: truncates the host name to the length you specify. As a result there's no guarantee that what's left will be enough to identify the site.



.. _WP_FAIL2BAN_XMLRPC_LOG:

WP_FAIL2BAN_XMLRPC_LOG
----------------------

.. versionadded:: 3.6.0

This is for debugging and future development.

Attackers are doing weird things with XML-RPC, so this logs the raw post data to the file specified:

.. code-block:: php

	define('WP_FAIL2BAN_XMLRPC_LOG', '/var/log/xml-rpc.log');

