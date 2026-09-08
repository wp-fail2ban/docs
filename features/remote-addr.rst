.. _feature-remote-addr:

Remote address resolution
=========================

:ref:`WP_FAIL2BAN_REMOTE_ADDR` overrides the client IP (not a ``Config::CONFIG`` key; set it in ``wp-config.php``). Unknown or untrusted ``X-Forwarded-For`` values log :ref:`WPF2B_EVENT_OTHER_UNKNOWN_PROXY` (hard).

Without a trusted proxy list or Cloudflare integration, the TCP peer is the address that gets banned — usually wrong behind a CDN.

.. include:: ../autogen/join/feature-remote-addr.rst
