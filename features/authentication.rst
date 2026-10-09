.. _feature-authentication:

Authentication
==============

|WPf2b| makes authentication inside WordPress visible to host security. It records login outcomes from the WordPress login form, XML-RPC, and the REST API with application context that the web server alone does not have. fail2ban can then decide whether the resulting pattern warrants a host ban.

Authentication protection also includes controls that refuse selected login attempts inside WordPress, such as attempts using a blocked identifier or a username where email-only login is required. They refuse the login directly, and their messages can also contribute to a host ban when a fail2ban jail is configured to act on them.

The pages in this section cover login logging, blocked identifiers, email-only login, and password-reset activity. :ref:`feature-user-enumeration` is documented separately because it limits public discovery of account names rather than authenticating them.

.. toctree::
   :maxdepth: 1

   login-logging
   blocked-users
   email-only-login
   password-reset
