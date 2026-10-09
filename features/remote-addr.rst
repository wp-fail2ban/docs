.. _feature-remote-addr:

Remote address resolution
=========================

|WPf2b| normally begins with ``REMOTE_ADDR``, the address from which the web server received the connection. On a direct request, this is normally the visitor. Behind a reverse proxy, it is the proxy unless trusted-proxy handling or the fixed override replaces it.

This becomes the resolved client address that |WPf2b| writes into log messages and Premium events, uses for country and Ignore List checks, and exposes to fail2ban for a possible ban. :ref:`feature-trusted-proxies` explains how a trusted immediate peer can supply the visitor address through ``X-Forwarded-For``, including the checks and failure behaviour that protect that trust boundary.

In Free, proxy checking normally occurs when an address is needed for logging or storage; :ref:`WP_FAIL2BAN_CHECK_PROXIES` checks on every request. Premium resolves the address early on every request.

:ref:`WP_FAIL2BAN_REMOTE_ADDR` is a fixed override for anonymised requests and takes precedence over proxy handling. Every request then receives the same address in |WPf2b|, so logs, events, country checks, and address-based controls can no longer distinguish visitors. In Premium, adding that fixed address to the Ignore List disables core logging, blocking, WAF checks, and event storage for every request. A later ban targets the fixed address rather than the original visitors, so it may fail to block their network traffic or may affect unrelated traffic that genuinely uses that address.

.. include:: ../autogen/join/feature-remote-addr.rst
   :end-before: Source
