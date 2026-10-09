.. _feature-user-enumeration:

User enumeration
================

User enumeration protection reduces the ways WordPress itself confirms account login names. It rejects ordinary author-ID requests and REST requests for the users list or an individual user, removes author fields from oEmbed responses, and suppresses the WordPress users sitemap. Rejected author and REST requests write a message that can match the hard filter. The oEmbed and sitemap changes do not produce hard-filter messages.

A confirmed username lets an attacker concentrate password attempts on a real account, makes passwords leaked for the same or similar username more useful, and helps focus other account-specific attacks. Names exposed independently by themes, plugins, feeds, or page content remain outside this control.

:ref:`quickstart_advanced_username_protection` combines this with :ref:`feature-email-only-login`. The individual control appears on the Block tab in Advanced settings; Free displays it as read-only.

A narrower REST authors-list request made by a logged-in user writes a Debug message rather than a message that can match the hard filter.

.. include:: ../autogen/join/feature-user-enumeration.rst
   :end-before: Source
