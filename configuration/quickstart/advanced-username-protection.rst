.. _quickstart_advanced_username_protection:

Advanced username protection
============================

**Edition:** Free.

Selecting this card combines enumeration protection with email-only login.
|WPf2b| refuses attempts to enumerate usernames through mechanisms it controls
and refuses authentication attempts whose submitted identifier is not an email
address. The configuration therefore prevents those mechanisms from supplying a
username and prevents a non-email username from being used to authenticate.

User accounts, usernames, email addresses, and passwords are not changed. Users
authenticate by submitting their email address instead of a non-email username.

The card does not prevent themes, plugins, feeds, or page content from exposing
usernames independently. It also does not change
:ref:`WP_FAIL2BAN_BLOCKED_USERS`, the separate list of identifiers that may never
authenticate. The linked :ref:`feature-user-enumeration` and
:ref:`feature-email-only-login` pages describe the exact mechanics of the two
controls.

Underlying settings
-------------------

The card sets :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION` and
:ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN` to ``true``. If either constant is
already fixed to a conflicting value in ``wp-config.php``, the card applies
neither setting and Site Health reports the conflict. The equivalent individual
controls are on the Block tab in Advanced settings.

.. include:: ../../autogen/join/card-advanced-username-protection.rst

.. seealso::
   :ref:`feature-user-enumeration`
   :ref:`feature-email-only-login`
   :ref:`feature-blocked-users`
