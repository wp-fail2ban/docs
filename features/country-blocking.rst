.. _feature-country-blocking:

Country blocking
================

Premium. Blocks requests by ISO 3166-1 alpha-2 country code. Ordinary blocks return HTTP 403; :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451` returns HTTP 451 with a ``Link: rel="blocked-by"`` header.

:ref:`WP_FAIL2BAN_EX_GEOLOCATION` selects MaxMind, Cloudflare's ``CF-IPCountry`` header, both, or neither. Stored event country codes use the same geolocation method.

The Cloudflare methods require :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE`. The country header is used only when the connecting address is a Cloudflare IP. Without that, a client that can reach WordPress can supply its own country header and change both the block decision and the country stored with Premium events.

When a country cannot be resolved, :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL` controls the outcome. With fail closed enabled, the request is denied with HTTP 403 once a country list is in use. With fail closed disabled (the default), a configured country list does not apply to that request. Geolocation set to ``disabled``, or empty country lists, leave unresolved requests allowed.

Country lists are on the Block tab in Advanced settings. The MaxMind licence, geolocation method, and fail-closed control are on the Remote IPs tab.

.. include:: ../autogen/join/feature-country-blocking.rst
   :end-before: Source
