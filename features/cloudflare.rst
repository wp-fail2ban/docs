.. _feature-cloudflare:

Cloudflare integration
======================

Premium. Cloudflare sits between visitors and WordPress, so logging its edge address instead of the visitor address can misdirect a later ban. Because requests use a large pool of edge addresses, banning some of those addresses can make the site fail intermittently as traffic moves between banned and unbanned edges. Cloudflare integration recognises Cloudflare's maintained address list as trusted immediate peers and uses the first ``X-Forwarded-For`` value as the client address. Cloudflare-specific headers are not the WP fail2ban client-IP source.

Automatic list refresh depends on scheduled work and outbound access to Cloudflare's published ranges. Defining :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS` replaces that managed list with a static one. This supports locked-down installations where WordPress cannot retrieve the ranges itself, while moving update responsibility to the operator or the host's configuration-management process.

When a static trust list omits a current edge range, requests through that range carry a forwarded header from an untrusted peer and are rejected with HTTP 403, while requests through listed ranges can continue. The result can again appear intermittent as Cloudflare chooses different edges. Country lookup may use Cloudflare's country header only when the connecting peer passes the Cloudflare trust check; see :ref:`feature-country-blocking`.

The :ref:`quickstart_cloudflare_integration` card enables the integration. See :ref:`feature-trusted-proxies` for the general trust model.

.. include:: ../autogen/join/feature-cloudflare.rst
   :end-before: Source
