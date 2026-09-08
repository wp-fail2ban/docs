.. _quickstart_advanced_username_protection:

Advanced username protection
============================

**Edition:** Free.

This card is the 6.3 login hardening bundle: stop ``?author=`` / REST user probes, and refuse logins that use the username instead of the email address. Together they make it much harder to confirm that ``admin`` exists and then stuff passwords against it.

They are separate features because you may want enumeration blocking without email-only login (or the reverse). The card turns both on because that is the usual intent. **Blocked users** is not enabled by the card; it is the related list of usernames that are never allowed to log in (regex or array). Configure it if you still have an ``admin`` account you cannot rename.

If :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION` or :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN` is already defined in ``wp-config.php``, QuickStart cannot change that feature. Site Health flags the failure.

In 6.3 Advanced settings these controls sit on the Block tab.

.. include:: ../../autogen/join/card-advanced-username-protection.rst

.. seealso::
   :ref:`feature-user-enumeration`
   :ref:`feature-email-only-login`
   :ref:`feature-blocked-users`
