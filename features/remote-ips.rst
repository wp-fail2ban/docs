.. _feature-remote-ips:

Remote IPs and proxies
======================

When a proxy sits in front of WordPress, the web server can see the intermediary's address instead of the visitor's. Accurate remote-IP configuration keeps evidence and address-based decisions attached to the visitor, so a later ban targets the source that produced the activity. If the resolved address identifies a shared proxy instead, the ban can affect unrelated traffic.

|WPf2b| normally starts with the TCP peer. Trusted-proxy and Cloudflare settings can recover the visitor address from ``X-Forwarded-For`` when the immediate peer is trusted. The resolved address is written to syslog and is the address a fail2ban jail may use for a ban. See :ref:`feature-remote-addr` for the observable failure patterns and :ref:`feature-trusted-proxies` for the trust boundary.

The Premium Ignore List suppresses core WP fail2ban logging, blocking, WAF checks, and event storage for selected resolved addresses. Actions registered by third-party integrations through WP fail2ban can still run. Jetpack integration maintains a source list for XML-RPC requests. Country lookup and blocking are described under :ref:`feature-country-blocking`.

.. toctree::
   :maxdepth: 1

   remote-addr
   trusted-proxies
   cloudflare
   jetpack
   ignore-list
