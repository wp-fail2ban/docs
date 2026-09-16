.. _feature-trusted-proxies:

Trusted proxies
===============

|WPf2b| begins with ``REMOTE_ADDR``, the address from which the web server
received the request. Without a trusted proxy configuration, this remains the
resolved client address and any ``X-Forwarded-For`` header is ignored.

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

The first forwarded value must be a valid IPv4 or IPv6 address. An invalid value
from a trusted proxy cannot be resolved; |WPf2b| writes an error to the PHP error
log and ends the request with an internal-server-error response.

In Free, that trusted-proxy path runs when the client address is resolved.
Without :ref:`WP_FAIL2BAN_CHECK_PROXIES`, resolution typically happens only when
logging or storing an address. With it enabled, Free resolves — and therefore
checks proxies — on every request. Premium always resolves the client address
early in the request, so the Free setting has no effect there.

Trust boundary
--------------

Only the immediate peer identified by ``REMOTE_ADDR`` is checked against the
trusted list. Once that peer is trusted, it controls the first forwarded value
and therefore the identity attributed to the requester. Accepting forwarded
data from a peer that does not reliably replace requester-supplied headers would
allow the requester to choose that identity.

The resolved address is subsequently attached to syslog messages and Premium
events. It is also stored as the comment author IP when comments, pingbacks, or
trackbacks are saved, so spam marking and the WordPress comments UI see the same
address as syslog and fail2ban. It is used by address-dependent features such as
the Premium ignore list and geolocation, and is the address extracted by fail2ban
for a ban. An incorrectly attributed address therefore changes both the evidence
recorded and the address on which later decisions operate.

:ref:`WP_FAIL2BAN_REMOTE_ADDR` is a fixed override for anonymised requests. When
it is defined, its value takes precedence and the trusted-proxy/header path is
not evaluated. Premium's :ref:`feature-cloudflare` adds Cloudflare networks to
the same trusted-proxy model and maintains that list automatically.

.. include:: ../autogen/join/feature-trusted-proxies.rst
   :end-before: Source
