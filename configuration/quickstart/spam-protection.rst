.. _quickstart_spam_protection:

Spam protection
===============

**Edition:** Free.

Selecting the card sets :ref:`WP_FAIL2BAN_LOG_SPAM` to ``true``. |WPf2b| logs comments that WordPress, a moderator, or a spam-detection plugin has classified as spam; Premium also records comments discarded by Akismet. These events match ``wordpress-hard.conf``.

|WPf2b| does not classify spam itself. The card is useful when repeated comment, pingback, trackback, review, or similar submissions should cause the source address to be banned. It does not enable logging of accepted comments.

If the setting is fixed to a conflicting value in ``wp-config.php``, the card cannot apply it and Site Health reports the conflict. The equivalent individual control is on the Logging tab in Advanced settings.

.. include:: ../../autogen/join/card-spam-protection.rst

.. seealso::
   :ref:`feature-spam`
