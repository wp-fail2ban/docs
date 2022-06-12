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

.. seealso::
   * :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN`
