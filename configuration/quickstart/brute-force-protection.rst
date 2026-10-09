.. _quickstart_brute_force_protection:

Brute-force protection
======================

**Edition:** Free. The card is informational and locked on.

|WPf2b| writes messages for ordinary credential rejections from the login form and XML-RPC, failed REST Application Password authentication, and login-form submissions with a blank username or password. The shipped filters let fail2ban count those messages under the host's jail policy.

Successful form logins are recorded by default. Successful REST and XML-RPC authentications are off by default because API clients may authenticate on every request, generating many success records.

A configured fail2ban jail is needed to count the messages and act on them; see
:ref:`configuration__fail2ban`.

Username and enumeration controls are available through :ref:`quickstart_advanced_username_protection`.

Bundle settings
---------------

This informational card changes no setting.

.. include:: ../../autogen/join/card-brute-force-protection.rst

.. seealso::
   :ref:`feature-login-logging`
