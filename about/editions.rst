.. _about_editions:

Editions and distribution
=========================

There are three flavours of the same plugin:

Canonical (GitHub)
   The recommended open-source build. It provides signed releases, an SBOM, Composer installation, and a self-updater.

WordPress.org (LTS)
   The Plugin Directory build. It receives bug fixes and WordPress/PHP compatibility updates, and lags Canonical by at least one major version.

Premium
   Canonical plus country blocking, honeypot, WAF, managed Cloudflare/Jetpack lists, MaxMind, and the event store. Distributed via Freemius.

``WP_FAIL2BAN_FREE_ONLY`` suppresses Premium upsell in the Free UI. ``WP_FAIL2BAN_USING_COMPOSER`` tells the plugin it was installed with Composer so the GitHub updater steps aside.
