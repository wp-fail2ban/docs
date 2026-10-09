.. _feature-email-only-login:

Email-only login
================

Email-only login makes a public WordPress username insufficient for authentication by requiring the account email address instead. Users continue to supply the same password. When somebody submits a non-email identifier, |WPf2b| rejects the login and writes a message that can match the hard filter.

Without this requirement, a confirmed username lets an attacker concentrate password attempts on a real account and makes passwords leaked for the same or similar username more useful. Email addresses can also be public or appear in leaked credential sets, so the additional identifier hurdle is lost when the account email is already known.

The :ref:`quickstart_advanced_username_protection` card combines this with enumeration protection. The individual control appears on the Block tab in Advanced settings; Free displays it as read-only.

.. include:: ../autogen/join/feature-email-only-login.rst
   :end-before: Source
