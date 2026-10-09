.. _quickstart_advanced_username_protection:

Advanced username protection
============================

**Edition:** Free.

Selecting this card makes WordPress usernames harder to discover and prevents them from being used to sign in. Existing users sign in with their email address and current password; the card does not change their accounts or passwords.

The card does not hide names independently exposed by themes, plugins, feeds, or page content. See :ref:`feature-user-enumeration` and :ref:`feature-email-only-login` for the behaviour of each control.

Bundle settings
---------------

.. list-table::
   :header-rows: 1
   :widths: 75 25

   * - Setting
     - Value applied
   * - :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`
     - ``true``
   * - :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN`
     - ``true``

The Block tab shows the individual controls. Use the constants for individual
changes in Free.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-advanced-username-protection.rst

.. seealso::
   :ref:`feature-user-enumeration`
   :ref:`feature-email-only-login`
