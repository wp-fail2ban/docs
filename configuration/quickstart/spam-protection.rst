.. _quickstart_spam_protection:

Spam protection
===============

**Edition:** Free.

Selecting this card lets fail2ban act on sources that repeatedly submit comment spam. |WPf2b| logs a comment after WordPress, a moderator, or a spam-detection plugin marks it as spam, producing a message that can match the hard filter; Premium also records comments discarded by Akismet. |WPf2b| does not decide whether a comment is spam, and the host's jail determines whether repeated submissions warrant a ban.

Bundle settings
---------------

.. list-table::
   :header-rows: 1
   :widths: 75 25

   * - Setting
     - Value applied
   * - :ref:`WP_FAIL2BAN_LOG_SPAM`
     - ``true``

The Logging tab shows the individual control; use the constant for an
individual change in Free.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-spam-protection.rst

.. seealso::
   :ref:`feature-spam`
