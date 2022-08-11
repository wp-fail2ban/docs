.. _WP_FAIL2BAN_BLOCK_USER_ENUMERATION:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_BLOCK_USER_ENUMERATION
----------------------------------

.. versionadded:: 2.1.0
.. versionchanged:: 4.0.0
   Now also blocks enumeration via the REST API.

----

Brute-forcing WordPress requires a valid username. Unfortunately, WordPress makes usernames trivial to find.

*WPf2b* can block the most common method of username discovery: user enumeration. Add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_BLOCK_USER_ENUMERATION', true);

.. include:: use-wp-config.rst

.. warning::
   If your theme has Author profile pages (e.g. TwentyTwenty) you will need to block username logins instead.

.. seealso::
   * :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN`

.. rubric:: History

Based on a suggestion from *@geeklol* and a plugin by *@ROIBOT*.
