.. _feature-trusted-proxies:

Trusted proxies
===============

Trusted-proxy configuration lets |WPf2b| recover the visitor address when a
reverse proxy connects to WordPress on the visitor's behalf. PHP normally sees
the proxy as the source of that connection, so the recovered address is what
|WPf2b| puts in logs and events and what fail2ban may later ban. A fully
transparent proxy instead preserves the visitor as the connection's source, so
PHP already sees the visitor address. A site behind one does not need
trusted-proxy configuration in |WPf2b|; the rest of this page applies only
when the proxy itself is the source of the connection to WordPress.

PHP exposes the source address it sees for the connection as ``REMOTE_ADDR``.
|WPf2b| starts with this source address. Without a trusted proxy configuration,
it remains the resolved client address and any
``X-Forwarded-For`` header is ignored. When the source address is trusted,
the first value in ``X-Forwarded-For`` becomes the client address. This is the
only forwarded client-address source, including for Cloudflare;
provider-specific client-IP headers are not alternative identity sources.
Using one source keeps address attribution consistent across providers.

Trusting the proxy that made the connection lets it choose the forwarded client
address, so it must reliably replace forwarding data supplied by the requester.
Otherwise a requester could select an ignored address, influence a country
decision, or make logs, events, and a later ban refer to an unrelated address.

When :ref:`WP_FAIL2BAN_PROXIES` contains one or more addresses or networks,
|WPf2b| processes ``X-Forwarded-For`` as follows:

* If the header is absent, the connection's source address remains the client
  address.
* If the source address belongs to the trusted list, the first address in
  the header becomes the client address. Later addresses in the header are not
  used to establish trust.
* If the header is present but the source address is not trusted, |WPf2b|
  logs :ref:`WPF2B_EVENT_OTHER_UNKNOWN_PROXY` against that address and rejects
  the request with a 403 response. The message matches
  :ref:`filters-wordpress-hard`.

The first forwarded value must be a valid IPv4 or IPv6 address. If a trusted
proxy supplies an invalid value, |WPf2b| cannot identify the visitor. It writes
a diagnostic error to the PHP error log and ends the request with an
internal-server-error response, without producing the unknown-proxy hard
failure used for an untrusted peer.

In Free, the proxy is checked when |WPf2b| needs the client address for a log or
stored record. :ref:`WP_FAIL2BAN_CHECK_PROXIES` instead makes Free resolve the
client address, and therefore check the proxy, on every request. Premium resolves
the client address early on every request, so the Free setting has no effect
there.

Where the resolved address is used
----------------------------------

The resolved address is subsequently attached to syslog messages and Premium
events. It is also stored as the comment author IP when comments, pingbacks, or
trackbacks are saved, so spam marking and the WordPress comments UI see the same
address as syslog and fail2ban. It is used by address-dependent features such as
the Premium ignore list and geolocation, and is the address extracted by fail2ban
for a ban. An incorrectly attributed address therefore changes what the logs and
events record and which address later controls and bans use. If the proxy itself
is attributed, the ban can affect every visitor using that address; the
consequences of different proxy pool sizes are described in
:ref:`feature-remote-addr`.

:ref:`WP_FAIL2BAN_REMOTE_ADDR` is a fixed override for anonymised requests. When
it is defined, its value takes precedence, so forwarded headers and the trusted
proxy list no longer affect the resolved address. Premium's
:ref:`feature-cloudflare` adds Cloudflare networks to the same trusted-proxy
list and maintains those entries automatically.

.. include:: ../autogen/join/feature-trusted-proxies.rst
   :end-before: Source
