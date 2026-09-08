.. _configuration_quickstart:

QuickStart
==========

QuickStart is the 6.3 simple UI. It is not a stopgap for a future policy model: 6.4 adds policy **beside** QuickStart, not instead of it.

Each card turns on a canned set of features. The card page explains why that set belongs together and what happens if a constant is already defined. Site Health reports QuickStart failures when a card cannot apply because a ``define()`` is in the way.

There is no Rate Limiting card in 6.3 (the stub is disabled and experimental). Do not treat it as shipped.

.. toctree::
   :maxdepth: 1

   quickstart/brute-force-protection
   quickstart/advanced-username-protection
   quickstart/spam-protection
   quickstart/journald-support
   quickstart/honeypot
   quickstart/cloudflare-integration
   quickstart/web-application-firewall
