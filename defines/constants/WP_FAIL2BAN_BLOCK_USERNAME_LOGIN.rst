.. _WP_FAIL2BAN_BLOCK_USERNAME_LOGIN:

WP_FAIL2BAN_BLOCK_USERNAME_LOGIN
--------------------------------

.. versionadded:: 4.3.0

WordPress makes it trivial to discover valid usernames, and sometimes it is not possible to block user enumeration to prevent this.

A better and complementary solution is to prevent logins with usernames, instead forcing the use of the user's registered email address.

To do this, add the following to ``wp-config.php``:

.. code-block:: php

   define('WP_FAIL2BAN_BLOCK_USERNAME_LOGIN', true);

.. include:: use-wp-config.rst

.. seealso::
   * :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`
