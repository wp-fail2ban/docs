.. _feature-trusted-proxies:

Trusted proxies
===============

A reverse proxy hides the visitor behind the address from which the web server
received the request. Trusting the known immediate proxy lets |WPf2b| recover
the visitor address, keeping evidence and later bans directed at the visitor.
It also delegates control of that identity to the proxy, so only a peer that
reliably replaces requester-supplied forwarding data should be trusted.

|WPf2b| begins with ``REMOTE_ADDR``. Without a trusted proxy configuration,
this remains the resolved client address and any ``X-Forwarded-For`` header is
ignored. When the immediate peer is trusted, ``X-Forwarded-For`` is the only
forwarded client-address source, including for Cloudflare; provider-specific
client-IP headers do not become alternative identity sources. Using one source
keeps address attribution consistent across providers, but the proxy must make
that header trustworthy and consistent.

When :ref:`WP_FAIL2BAN_PROXIES` contains one or more addresses or networks,
|WPf2b| processes ``X-Forwarded-For`` as follows:

* If the header is absent, ``REMOTE_ADDR`` remains the client address.
* If ``REMOTE_ADDR`` belongs to the trusted list, the first address in the
  header becomes the client address. Later addresses in the header are not used
  to establish trust.
* If the header is present but ``REMOTE_ADDR`` is not trusted, |WPf2b| logs
  :ref:`WPF2B_EVENT_OTHER_UNKNOWN_PROXY` against ``REMOTE_ADDR`` and rejects the
  request with a 403 response. The message matches
  :ref:`filters-wordpress-hard`.

The first forwarded value must be a valid IPv4 or IPv6 address. If a trusted
proxy supplies an invalid value, |WPf2b| cannot attribute the request to a
visitor. It writes a diagnostic error to the PHP error log and ends the request
with an internal-server-error response, without producing the unknown-proxy hard
failure used for an untrusted peer. The error establishes that the trusted peer
supplied unusable address data; it does not identify the visitor.

In Free, the proxy is checked when |WPf2b| needs the client address for a log or
stored record. :ref:`WP_FAIL2BAN_CHECK_PROXIES` instead makes Free resolve the
client address, and therefore check the proxy, on every request. Premium resolves
the client address early on every request, so the Free setting has no effect
there.

Trust boundary
--------------

Only the immediate peer identified by ``REMOTE_ADDR`` is checked against the
trusted list. Once that peer is trusted, it controls the first forwarded value
and therefore the identity attributed to the requester. Accepting forwarded
data from a peer that does not reliably replace requester-supplied headers would
allow the requester to choose that identity. The requester could then select an
ignored address, influence a country decision, or make evidence and a later ban
refer to an unrelated address.

The resolved address is subsequently attached to syslog messages and Premium
events. It is also stored as the comment author IP when comments, pingbacks, or
trackbacks are saved, so spam marking and the WordPress comments UI see the same
address as syslog and fail2ban. It is used by address-dependent features such as
the Premium ignore list and geolocation, and is the address extracted by fail2ban
for a ban. An incorrectly attributed address therefore changes both the evidence
recorded and the address on which later decisions operate. If the proxy itself
is attributed, the ban can affect every visitor using that address; the
consequences of different proxy pool sizes are described in
:ref:`feature-remote-addr`.

:ref:`WP_FAIL2BAN_REMOTE_ADDR` is a fixed override for anonymised requests. When
it is defined, its value takes precedence, so forwarded headers and the trusted
proxy list no longer affect the resolved address. Premium's
:ref:`feature-cloudflare` adds Cloudflare networks to the same trusted-proxy
model and maintains that list automatically.

.. include:: ../autogen/join/feature-trusted-proxies.rst
   :end-before: Source
