.. _quickstart_brute_force_protection:

Brute-force protection
======================

**Edition:** Free. The card is informational and locked on.

|WPf2b| always records failed authentication handled by WordPress, including
empty usernames and REST or XML-RPC failures, to the authentication facility.
Successful form logins are recorded by default. Successful REST and XML-RPC
authentications are not recorded unless those controls are enabled, because API
clients commonly authenticate on every request.

The card does not change a setting and cannot be switched off.

Failed logins and empty usernames match ``wordpress-soft.conf``. Authentication
attempts for unknown REST or XML-RPC users match ``wordpress-hard.conf``. A
working fail2ban jail is required to turn those matches into bans; see
:ref:`configuration__fail2ban`.

Blocked usernames, email-only login, and user enumeration are configured by
:ref:`quickstart_advanced_username_protection`. The authentication facility and
success-logging controls are on the Logging tab in Advanced settings.

.. include:: ../../autogen/join/card-brute-force-protection.rst

.. seealso::
   :ref:`feature-login-logging`
