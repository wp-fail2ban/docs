.. _quickstart_spam_protection:

Spam protection
===============

**Edition:** Free.

Selecting the card enables logging for comments already classified as spam by WordPress, a moderator, or a spam-detection plugin; Premium also records comments discarded by Akismet. |WPf2b| does not classify spam itself. The resulting hard-filter evidence can help a fail2ban jail identify repeated submissions, but a log entry alone does not impose a ban.

Selecting the card applies :ref:`WP_FAIL2BAN_LOG_SPAM` as ``true``. The Logging tab shows the individual control; use the constant for an individual change in Free.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-spam-protection.rst

.. seealso::
   :ref:`feature-spam`
