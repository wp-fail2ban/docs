.. _feature-email-only-login:

Email-only login
================

Once an attacker knows that a WordPress username belongs to a real account, they can concentrate attempts on that account instead of guessing which identifiers exist. They can try passwords leaked for the same or similar usernames, increasing the chance that a reused password will work, and can focus other account-specific attacks on a known user. Email-only login makes the public username insufficient for authentication by requiring the account email address instead. It produces hard-filter evidence when a non-email username is rejected; users continue to supply the same password. Email addresses can also be public or appear in leaked credential sets, so the additional identifier hurdle is lost when the account email is already known to the attacker.

The :ref:`quickstart_advanced_username_protection` card combines this with enumeration protection. The individual control appears on the Block tab in Advanced settings; Free displays it as read-only.

.. include:: ../autogen/join/feature-email-only-login.rst
   :end-before: Source
