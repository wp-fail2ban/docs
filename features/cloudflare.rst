.. _feature-cloudflare:

Cloudflare integration
======================

The Premium Cloudflare integration keeps |WPf2b| log messages, events, and later bans associated with the visitor rather than the Cloudflare edge that delivered the request. It recognises Cloudflare's maintained address list as trusted immediate peers. Cloudflare provides its own client-IP headers, but |WPf2b| deliberately ignores them and uses the first ``X-Forwarded-For`` value, as described in :ref:`feature-trusted-proxies`.

Without correct attribution, fail2ban can ban a Cloudflare edge rather than the visitor. The host firewall then rejects every request delivered through that edge. Because Cloudflare can deliver later requests through many edge addresses, requests through a banned edge fail while those through an unbanned edge succeed, making the site appear to fail intermittently.

Automatic list refresh depends on scheduled work and outbound access to Cloudflare's published ranges. Defining :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS` replaces that managed list with a static one. This supports locked-down installations where WordPress cannot retrieve the ranges itself, while moving update responsibility to the operator or the host's configuration-management process.

When a static trust list omits a current edge range, requests through that range carry a forwarded header from an untrusted peer and are rejected with HTTP 403, while requests through listed ranges can continue. The result can again appear intermittent as Cloudflare chooses different edges. Country lookup may use Cloudflare's country header only when the connecting peer passes the Cloudflare trust check; see :ref:`feature-country-blocking`.

The :ref:`quickstart_cloudflare_integration` card enables the integration. See :ref:`feature-trusted-proxies` for the general trust model.

.. include:: ../autogen/join/feature-cloudflare.rst
   :end-before: Source
