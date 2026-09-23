.. _feature-country-blocking:

Country blocking
================

A site with no reason to serve particular countries may choose not to expose its login, comment, and other WordPress interfaces to traffic attributed to them. Premium country blocking enforces that coarse geographic policy before WordPress serves the requested content. Country attribution describes the request's apparent network location, not the visitor's identity or intent, so a listed-country policy can also refuse travellers, VPN users, or other legitimate visitors whose traffic is located there. Choose the list and response according to the access policy you intend. Put a country in either the 403 list or the 451 list; do not put it in both. The 451 response includes a ``Link: rel="blocked-by"`` header. If the lists overlap, the 403 response takes precedence, but overlap is a contradictory policy configuration.

:ref:`WP_FAIL2BAN_EX_GEOLOCATION` selects local MaxMind data, Cloudflare country data, both, or neither. A MaxMind licence supports downloading and updating the local data; it is not required for a Cloudflare-only lookup. Cloudflare country data is accepted only when the immediate peer is recognised as Cloudflare and integration is enabled. Otherwise a requester could supply its own country header and influence the decision and stored country evidence.

An unresolved country means that |WPf2b| has no usable country attribution for the request and cannot establish which country the visitor appears to be in. By default, the request remains allowed and produces no country-denial message, event, or statistics update. :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL` can instead make an unresolved country return HTTP 403 when country blocking is active, with the denial recorded as **Unknown country**. With geolocation disabled or both lists empty, unresolved requests remain allowed because no country-blocking policy is active.

A denial can independently attempt a syslog message, a Premium event, and a statistics update. A fail2ban filter and jail may subsequently count the message and impose a ban; direct country rejection does not prove that occurred. Repeated denied traffic can therefore create repeated log and database work even though the request is refused.

Country statistics are lightweight, best-effort operational summaries rather than an audit count. They can undercount during concurrent traffic, without changing the country decision or a fail2ban jail's processing. They classify denials by reason rather than merely by HTTP status: the 403 category counts requests from countries explicitly placed on the 403 list, while a fail-closed request whose country could not be determined is counted under **Unknown country** even though its response is also HTTP 403. Totals and per-country counts are separate summaries. Site dashboard statistics cover that site, while the network dashboard uses a separate network-wide aggregate. On multisite, WP fail2ban Premium as a whole requires a Silver or higher plan; the statistics widget has no separate higher plan requirement. :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS` stops collection.

Country lists are on the Block tab in Advanced settings. The MaxMind licence, geolocation method, and unknown-country control are on the Remote IPs tab.

.. include:: ../autogen/join/feature-country-blocking.rst
   :end-before: Source
