.. _quickstart_brute_force_protection:

Brute-force protection
======================

**Edition:** Free. The card is informational and locked on.

|WPf2b| supplies fail2ban evidence for ordinary credential rejections from the normal login form and XML-RPC, failed REST Application Password authentication, and normal-form submissions with a blank username or password.

Successful form logins are recorded by default. Successful REST and XML-RPC authentications are off by default because API clients may authenticate on every request, generating many success records.

The card changes no setting. Ordinary failed logins and empty-credential records can match ``wordpress-soft.conf``; unknown REST or XML-RPC users can match ``wordpress-hard.conf``. A configured fail2ban jail is needed to count matches and act on them; see :ref:`configuration__fail2ban`.

Username and enumeration controls are available through :ref:`quickstart_advanced_username_protection`.

.. include:: ../../autogen/join/card-brute-force-protection.rst

.. seealso::
   :ref:`feature-login-logging`
