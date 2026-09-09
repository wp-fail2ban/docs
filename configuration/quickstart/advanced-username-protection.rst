.. _quickstart_advanced_username_protection:

Advanced username protection
============================

**Edition:** Free.

This card blocks ``?author=`` and REST user probes, and refuses logins that use a username instead of an email address. Together these controls make it harder to discover a login name and then use it for password attacks.

Selecting the card sets :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION` and :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN` to ``true``. All users must then sign in with their account email address. User-enumeration probes are logged as hard failures; blocked username logins are soft failures.

**Blocked users** is a separate list of usernames that may never log in. The card does not change :ref:`WP_FAIL2BAN_BLOCKED_USERS`; configure it separately for names such as ``admin`` or ``administrator``.

If either setting is fixed to a conflicting value in ``wp-config.php``, the card cannot apply the complete configuration and Site Health reports the conflict. The equivalent individual controls are on the Block tab in Advanced settings.

.. include:: ../../autogen/join/card-advanced-username-protection.rst

.. seealso::
   :ref:`feature-user-enumeration`
   :ref:`feature-email-only-login`
   :ref:`feature-blocked-users`
