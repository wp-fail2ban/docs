.. _about_editions:

Editions and distribution
=========================

There are three flavours of the same plugin:

Canonical (GitHub)
   The recommended open-source build. Signed releases, SBOM, Composer, and a self-updater. New work lands here first.

WordPress.org (LTS)
   The directory listing. Bug fixes and WordPress/PHP compatibility; it lags Canonical by at least one major version and keeps PHP 7.4 as long as practical.

Premium
   Canonical plus country blocking, honeypot, WAF, managed Cloudflare/Jetpack lists, MaxMind, and the event store. Distributed via Freemius.

``WP_FAIL2BAN_FREE_ONLY`` suppresses Premium upsell in the Free UI. ``WP_FAIL2BAN_USING_COMPOSER`` tells the plugin it was installed with Composer so the GitHub updater steps aside.

The REST companion file ``wp-fail2ban-rest.php`` is not a shipped 6.3 surface and is not documented here.
