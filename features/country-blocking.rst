.. _feature-country-blocking:

Country blocking
================

Premium country blocking enforces a geographic access policy before WordPress serves the requested content. It can return HTTP 403 or 451 for requests attributed to listed countries, allowing a site to close its login, comment, and other WordPress interfaces to traffic it has no reason to serve.

Country attribution describes the request's apparent network location, not the visitor's identity or intent. A listed-country policy can therefore also refuse travellers, VPN users, or other legitimate visitors whose traffic is located there. Choose the list and response according to the access policy you intend. Put a country in either the 403 list or the 451 list; do not put it in both. The 451 response includes a ``Link: rel="blocked-by"`` header. If the lists overlap, the 403 response takes precedence, but overlap is a contradictory policy configuration.

Country attribution
-------------------

:ref:`WP_FAIL2BAN_EX_GEOLOCATION` selects local MaxMind data, Cloudflare country data, both, or neither. A MaxMind licence supports downloading and updating the local data; it is not required for a Cloudflare-only lookup. Cloudflare country data is accepted only when the immediate peer is recognised as Cloudflare and integration is enabled. Otherwise a requester could supply its own country header and influence both the block decision and the country stored with a Premium event.

An unresolved country means that |WPf2b| has no usable country attribution for the request and cannot establish which country the visitor appears to be in. By default, the request remains allowed and produces no country-denial message, event, or statistics update. :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL` can instead make an unresolved country return HTTP 403 when country blocking is active, with the denial recorded as **Unknown country**. With geolocation disabled or both lists empty, unresolved requests remain allowed because no country-blocking policy is active.

Logs and statistics
-------------------

Each denial is written to syslog and stored as a Premium event. When statistics collection is enabled, the denial also updates the country statistics. These outputs are independent: the direct HTTP response does not depend on a fail2ban jail receiving the message, and the jail may apply its own ban policy. Repeated denied traffic can therefore continue to create log and database work.

Country statistics are lightweight, best-effort summaries rather than an audit count. They can undercount during concurrent traffic without changing the HTTP response or the messages processed by fail2ban. They group denials by reason rather than merely by status: the 403 category counts requests from countries on the 403 list, while a request blocked because its country could not be determined is counted under **Unknown country**, even though its response is also HTTP 403.

Totals and per-country counts are separate summaries. The site dashboard covers that site, while the network dashboard uses a separate network-wide aggregate. On multisite, any use of WP fail2ban Premium requires a Silver or higher plan; the statistics widget has no additional plan requirement. :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS` stops collection.

Country lists are on the Block tab in Advanced settings. The MaxMind licence, geolocation method, and unknown-country control are on the Remote IPs tab.

.. include:: ../autogen/join/feature-country-blocking.rst
   :end-before: Source
