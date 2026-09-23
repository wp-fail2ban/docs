.. _quickstart_cloudflare_integration:

Cloudflare integration
======================

**Edition:** Premium.

Selecting the card enables Cloudflare integration. When a request comes through a recognised Cloudflare edge, |WPf2b| can use the visitor address from ``X-Forwarded-For``. Without that recognition, a request may be attributed to the edge or, when another non-empty trust list is active, rejected as an unknown proxy. A later fail2ban ban on an attributed edge can make traffic fail intermittently across Cloudflare's address pool. Trusting the forwarded address depends on the immediate peer being a recognised Cloudflare address; see :ref:`feature-trusted-proxies` and :ref:`feature-remote-addr`.

Selecting the card applies :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE` as ``true``. Its individual control is on the Remote IPs tab in Advanced settings.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-cloudflare-integration.rst

.. seealso::
   :ref:`feature-cloudflare`
   :ref:`feature-remote-addr`
   :ref:`operating_scheduled`
