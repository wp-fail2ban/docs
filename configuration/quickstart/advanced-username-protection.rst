.. _quickstart_advanced_username_protection:

Advanced username protection
============================

**Edition:** Free.

Selecting this card removes the WordPress username-discovery surfaces controlled
by |WPf2b| and rejects authentication identifiers that are not email addresses.
The resulting configuration prevents those surfaces from supplying a username
and prevents a discovered non-email username from being used to authenticate.

Enumeration protection intercepts unprivileged author-archive and REST user-list
requests. Rejected enumeration attempts receive a 403 response and are logged as
hard failures. WordPress's logged-in REST author preload is also rejected, but
uses a Debug-level message which does not match the hard filter. The control
removes the author's name and URL from oEmbed responses and removes the WordPress
user sitemap; these suppressed outputs do not themselves create a hard-failure
event.

Email-only authentication rejects an attempt before WordPress checks the
credentials when the submitted login identifier is not syntactically an email
address. The attempt receives a 403 response and is logged as a soft failure.
User accounts, usernames, email addresses, and passwords are not changed; users
authenticate by submitting an email address instead of a non-email username.

The card does not remove usernames exposed by themes, feeds, or page content.
It also does not change :ref:`WP_FAIL2BAN_BLOCKED_USERS`, the separate list of
identifiers that may never authenticate.

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
