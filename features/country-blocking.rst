.. _feature-country-blocking:

Country blocking
================

Premium. Block by ISO 3166-1 alpha-2 code. Ordinary blocks are HTTP 403; :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451` uses HTTP 451 plus a ``Link: rel="blocked-by"`` header.

Geolocation method and the MaxMind license live **here**, not under Remote IPs. :ref:`WP_FAIL2BAN_EX_GEOLOCATION` chooses MaxMind, Cloudflare’s ``CF-IPCountry``, both, or neither. Stored ISO codes on events use the same method.

In 6.3 country lists are on the Block tab; MaxMind/method are under Remote IPs in the UI. That split is a 6.3 footnote, not the feature boundary.

.. include:: ../autogen/join/feature-country-blocking.rst
