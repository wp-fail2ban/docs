.. _quickstart_spam_protection:

Spam protection
===============

**Edition:** Free.

Enables logging of comments WordPress (and, on Premium, Akismet) has already classified as spam. |WPf2b| does not run its own spam engine; it records the decision so fail2ban can treat repeat spam sources as hostile.

Turn this on if comment spam is a brute-force problem for you (form floods), not if you only want a nicer Akismet queue. Successful legitimate comments are a different feature and are not part of this card.

In 6.3 Advanced settings this is the spam checkbox on the Logging tab.

.. include:: ../../autogen/join/card-spam-protection.rst

.. seealso::
   :ref:`feature-spam`
