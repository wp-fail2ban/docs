.. _feature-blocked-users:

Blocked users
=============

Sites may have retired, reserved, or otherwise prohibited account identifiers that must never authenticate. The blocked-users control closes that route even if a valid password is supplied, and produces rejection evidence for the attempted name. It refuses authentication for specified identifiers before WordPress checks the password. The list accepts usernames or a case-insensitive regular expression; an empty or unset value blocks nobody by name. A broad regular expression can cover several identifiers, so legitimate attempts using any matching identifier are also refused.

This is separate from email-only login and enumeration protection. :ref:`quickstart_advanced_username_protection` does not change the blocked-users list. The individual control appears on the Block tab in Advanced settings; Free displays it as read-only.

.. include:: ../autogen/join/feature-blocked-users.rst
   :end-before: Source
