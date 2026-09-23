.. _feature-user-enumeration:

User enumeration
================

Knowing that a username belongs to a real account lets an attacker concentrate password attempts on that user instead of spending attempts on names that do not exist. It also makes leaked passwords associated with the same or similar usernames more useful and helps focus other account-specific attacks. User enumeration protection reduces the ways WordPress itself confirms those login names. When enabled, |WPf2b| rejects ordinary author-ID requests and REST requests for the users list or an individual user. Those rejected probes produce hard-filter evidence. A narrower logged-in REST authors-list request is rejected with a Debug message rather than the same hard event.

The feature also removes author fields from oEmbed responses and suppresses the WordPress users sitemap. Those reductions do not themselves produce hard-filter records. Names exposed independently by themes, plugins, feeds, or page content remain outside this control.

:ref:`quickstart_advanced_username_protection` combines this with :ref:`feature-email-only-login`. The individual control appears on the Block tab in Advanced settings; Free displays it as read-only.

.. include:: ../autogen/join/feature-user-enumeration.rst
   :end-before: Source
