.. _feature-blocked-users:

Blocked users
=============

The blocked-users control prevents specified account identifiers from authenticating and records the rejected name. This lets a site close login routes for retired, reserved, or otherwise prohibited identifiers. Rejection happens before WordPress checks the password.

The setting accepts either a list of usernames or a case-insensitive regular expression; an empty or unset value blocks nobody by name. Premium presents the list and expression as alternatives and checks that an expression is valid before saving it. This does not make a valid expression safe: ``.*`` matches every username. Test names that must remain usable as well as the identifiers the expression is meant to block, because every matching login is refused even when the submitted password is valid.

This is separate from email-only login and enumeration protection. :ref:`quickstart_advanced_username_protection` does not change the blocked-users list. The individual control appears on the Block tab in Advanced settings; Free displays it as read-only.

Recovering from an over-broad expression
-----------------------------------------

If an expression prevents you from signing in, disable the blocked-users restriction from outside WordPress by setting this constant in ``wp-config.php``. Replace its existing definition if there is one:

.. code-block:: php

   define('WP_FAIL2BAN_BLOCKED_USERS', false);

The constant takes priority over any stored setting and makes the blocked-users list empty, allowing matching accounts to reach normal WordPress authentication again. After signing in, open the Block tab in Advanced settings. The page will report that saving it will reset the stored blocked-users setting. Save the page to clear that setting, then remove the constant from ``wp-config.php``. You can then configure and test a replacement username list or expression normally.

.. include:: ../autogen/join/feature-blocked-users.rst
   :end-before: Source
