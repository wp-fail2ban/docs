.. _feature-remote-ips:

Remote IPs and proxies
======================

|WPf2b| normally uses the TCP peer as the client address. Trusted-proxy and Cloudflare settings allow it to recover the visitor address from a proxy header. The resolved address is written to syslog and is the address fail2ban bans.

The Premium ignore list bypasses all logging and blocking for selected resolved addresses. Jetpack integration maintains a trusted source list for XML-RPC requests. Country lookup and blocking are described under :ref:`feature-country-blocking`.

.. toctree::
   :maxdepth: 1

   remote-addr
   trusted-proxies
   cloudflare
   jetpack
   ignore-list
