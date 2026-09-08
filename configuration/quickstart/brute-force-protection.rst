.. _quickstart_brute_force_protection:

Brute-force protection
======================

**Edition:** Free. Informational; the card is locked on.

Login logging is the default |WPf2b| always provides. You do not switch this card off. It exists so QuickStart can show what you already have: successful and failed authentications, including empty usernames, REST, and XML-RPC, written to the auth facility.

There is nothing extra to enable. Empty-username attempts and unknown-user XML-RPC/REST probes are already classified for fail2ban (soft vs hard). Blocked usernames, email-only login, and user enumeration are **not** part of this card — they live on :ref:`quickstart_advanced_username_protection`.

In 6.3 Advanced settings the same logging sits on the Logging tab as authentication.

.. include:: ../../autogen/join/card-brute-force-protection.rst

.. seealso::
   :ref:`feature-login-logging`
