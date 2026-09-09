.. _feature-remote-addr:

Remote address resolution
=========================

:ref:`WP_FAIL2BAN_REMOTE_ADDR` overrides the client IP and must be set in ``wp-config.php``. Unknown or untrusted ``X-Forwarded-For`` values log :ref:`WPF2B_EVENT_OTHER_UNKNOWN_PROXY` as a hard failure.

Without a trusted proxy list or Cloudflare integration, the TCP peer is the address that gets banned — usually wrong behind a CDN.

.. include:: ../autogen/join/feature-remote-addr.rst
   :end-before: Source
