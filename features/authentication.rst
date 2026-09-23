.. _feature-authentication:

Authentication
==============

Login outcomes do not all carry the same operational meaning. Repeated failures for a real account can show that a known user is being targeted, while unknown-account failures can show broader probing for valid names; a success record can establish that access was gained. Authentication evidence preserves those distinctions so operators and fail2ban jails can respond to the relevant pattern. A record alone does not impose a ban.

|WPf2b| records ordinary credential rejections from the normal login form and XML-RPC, failed REST Application Password authentication, and normal-form submissions with a blank username or password. Successful form logins are logged by default. REST and XML-RPC success logging is separate and off by default because API clients may authenticate on every request.

Additional controls can reject blocked identifiers, require email-address login, reduce user enumeration, and record password-reset activity. :ref:`quickstart_advanced_username_protection` combines email-only login and enumeration protection.

.. toctree::
   :maxdepth: 1

   login-logging
   blocked-users
   email-only-login
   password-reset
