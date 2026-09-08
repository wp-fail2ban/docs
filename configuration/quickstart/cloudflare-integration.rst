.. _quickstart_cloudflare_integration:

Cloudflare integration
======================

**Edition:** Premium.

Enables Cloudflare as a trusted proxy and keeps the Cloudflare IP list updated. Without this (or an equivalent :ref:`WP_FAIL2BAN_PROXIES` entry), |WPf2b| would log Cloudflare edge addresses instead of visitors.

The card turns on the feature, not the escape-hatch list :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS`. Only define that list if outbound updates are impossible; you then own freshness.

Ignore-list IPs are a different control: they skip **all** of |WPf2b|, not merely Cloudflare restoration.

In 6.3 this sits on the Remote IPs tab.

.. include:: ../../autogen/join/card-cloudflare-integration.rst

.. seealso::
   :ref:`feature-cloudflare`
   :ref:`feature-remote-addr`
   :ref:`operating_scheduled`
