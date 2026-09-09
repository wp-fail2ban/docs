.. _quickstart_cloudflare_integration:

Cloudflare integration
======================

**Edition:** Premium.

Selecting the card sets :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE` to ``true``. |WPf2b| then treats requests from the maintained Cloudflare address list as proxied requests and logs the visitor address supplied by Cloudflare. Without Cloudflare integration or an equivalent :ref:`WP_FAIL2BAN_PROXIES` entry, the logged address is the Cloudflare edge address rather than the visitor.

The card does not set :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS`. Define that static list only when automatic updates are unavailable, and keep it current yourself.

Ignore-list IPs are a different control: they skip **all** of |WPf2b|, not merely Cloudflare restoration.

If the setting is fixed to a conflicting value in ``wp-config.php``, the card cannot apply it and Site Health reports the conflict. The equivalent individual control is on the Remote IPs tab in Advanced settings.

.. include:: ../../autogen/join/card-cloudflare-integration.rst

.. seealso::
   :ref:`feature-cloudflare`
   :ref:`feature-remote-addr`
   :ref:`operating_scheduled`
