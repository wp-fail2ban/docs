.. _feature-authentication:

Authentication
==============

Failed authentication is always recorded. Successful form logins are recorded by
default; successful REST and XML-RPC authentications are not, unless those
controls are enabled. Optional controls can reject named usernames, require
email-address login, block user-enumeration requests, and log password-reset
activity. The Username Protection card enables email-only login and
user-enumeration blocking together.

.. toctree::
   :maxdepth: 1

   login-logging
   blocked-users
   email-only-login
   password-reset
