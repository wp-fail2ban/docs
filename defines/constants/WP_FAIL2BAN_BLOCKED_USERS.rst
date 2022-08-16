.. _WP_FAIL2BAN_BLOCKED_USERS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_BLOCKED_USERS
-------------------------

.. rubric:: Block login for specified usernames.

.. versionadded:: 2.0.0

----

The bots that try to brute-force WordPress logins aren't that clever (no doubt that will change), but they may only make one request per IP every few hours in an attempt to avoid things like `fail2ban`. With large botnets this can still create significant load.

*WPf2b* allows you to specify a regex that will shortcut the login process if the requested username matches.

For example,

.. code-block:: php
   :caption: Example: regex

   /**
    * Block logic
    */
   define('WP_FAIL2BAN_BLOCKED_USERS', '^admin$');

will block any attempt to log in as **admin** before most of the core WordPress code is run. Unless you go crazy with it, a regex is usually cheaper than a call to the database, so this should help keep things running during an attack.

*WPf2b* doesn't do anything to the regex other than make it case-insensitive.

If you're running PHP 7 or later you can specify an array of users instead:

.. code-block:: php
   :caption: Example: Array of usernames

   /**
    * Block login
    */
   define('WP_FAIL2BAN_BLOCKED_USERS', ['admin', 'another', 'user']);

.. rubric:: History

Based on a suggestion from *@jmadea*.
