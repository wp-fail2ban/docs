.. _quickstart_advanced_username_protection:

Advanced username protection
============================

**Edition:** Free.

Selecting this card combines user-enumeration protection with email-only login. |WPf2b| reduces exposure through WordPress author and users interfaces it controls and rejects authentication with a non-email identifier. Users still have the same accounts and passwords, but must submit their account email address to log in.

The card does not hide names independently exposed by themes, plugins, feeds, or page content. See :ref:`feature-user-enumeration` and :ref:`feature-email-only-login` for the behaviour of each control.

Bundle settings
---------------

Selecting the card applies :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION` and :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN` as ``true`` in one bundle. The Block tab shows the individual controls. Use the constants for individual changes in Free.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-advanced-username-protection.rst

.. seealso::
   :ref:`feature-user-enumeration`
   :ref:`feature-email-only-login`
