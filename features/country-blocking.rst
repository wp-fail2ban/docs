.. _feature-country-blocking:

Country blocking
================

Premium. Blocks requests by ISO 3166-1 alpha-2 country code. Ordinary blocks return HTTP 403; :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451` returns HTTP 451 with a ``Link: rel="blocked-by"`` header.

:ref:`WP_FAIL2BAN_EX_GEOLOCATION` selects MaxMind, Cloudflare's ``CF-IPCountry`` header, both, or neither. Stored event country codes use the same geolocation method.

Country lists are on the Block tab in Advanced settings. The MaxMind licence and geolocation method are on the Remote IPs tab.

.. include:: ../autogen/join/feature-country-blocking.rst
   :end-before: Source
