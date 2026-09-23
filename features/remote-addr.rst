.. _feature-remote-addr:

Remote address resolution
=========================

The address attached to WP fail2ban evidence is also the address a fail2ban jail may later ban. Behind a proxy, using the proxy address instead of the visitor's address means that a ban can block future requests from unrelated visitors using that proxy. With a large address pool such as Cloudflare's, traffic may fail intermittently as requests arrive through banned and unbanned edge addresses. With a typical nginx reverse proxy using one or a few stable addresses, banning the proxy can effectively disconnect the site from the Internet until the ban is removed.

:ref:`feature-trusted-proxies` explains how |WPf2b| resolves the visitor through a trusted immediate peer. :ref:`WP_FAIL2BAN_REMOTE_ADDR` is a fixed override for anonymised requests and takes precedence over proxy handling. Every request then has the same WP fail2ban address, so evidence and address-based decisions can no longer distinguish visitors. In Premium, an Ignore List entry consequently suppresses core behaviour for every request. A later ban targets the fixed address rather than the original visitors, so it may fail to block their network traffic or may affect unrelated traffic that genuinely uses that address.

|WPf2b| uses the first ``X-Forwarded-For`` address only when the immediate peer is trusted. If an untrusted peer supplies that header while a trust list is configured, |WPf2b| records an unknown-proxy hard failure against the peer and rejects the request with HTTP 403. If a trusted peer supplies a malformed first client address, |WPf2b| cannot attribute the request to a visitor. It writes a diagnostic PHP error and ends the request with HTTP 500, without producing the unknown-proxy hard failure used for an untrusted peer. The result establishes that the trusted peer supplied unusable address data; it does not identify the visitor.

In Free, proxy checking normally occurs when an address is needed for logging or storage; :ref:`WP_FAIL2BAN_CHECK_PROXIES` checks on every request. Premium resolves the address early on every request.

.. include:: ../autogen/join/feature-remote-addr.rst
   :end-before: Source
