.. _WP_FAIL2BAN_BLOCKED_USERS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_BLOCKED_USERS
-------------------------

.. rubric:: Block login for specified usernames.
.. include:: default-disabled.rst

.. versionadded:: 2.0.0

----

Blocks login attempts for specified usernames using either a regular expression or an array of usernames. This helps prevent brute-force attacks by blocking common username targets before WordPress processes the login request.

The username matching is case-insensitive.

.. code-block:: php
   :caption: Example: Using regex

   /**
    * Block login attempts for 'admin' username
    */
   define('WP_FAIL2BAN_BLOCKED_USERS', '^admin$');

For PHP 7 or later, you can use an array of usernames:

.. code-block:: php
   :caption: Example: Using array of usernames

   /**
    * Block multiple usernames
    */
   define('WP_FAIL2BAN_BLOCKED_USERS', ['admin', 'administrator', 'webmaster']);

.. rubric:: History

Based on a suggestion from *@jmadea*.
