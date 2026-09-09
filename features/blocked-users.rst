.. _feature-blocked-users:

Blocked users
=============

Refuse login for a regex or a list of usernames **before** WordPress authenticates. Matching is case-insensitive. Typical use is locking ``admin`` / ``administrator`` after you have renamed the account.

The Username Protection card does not change this list. An empty or unset value means nobody is blocked by name.

The individual control is on the Block tab in Advanced settings.

.. include:: ../autogen/join/feature-blocked-users.rst
   :end-before: Source
