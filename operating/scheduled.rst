.. _operating_scheduled:

Scheduled maintenance
=====================

Premium uses WordPress cron for these maintenance tasks:

* **Cloudflare IP list** — refresh :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS` unless you defined the escape hatch yourself
* **Jetpack IP list** — same pattern for :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK_IPS`
* **MaxMind database** — refresh GeoLite/GeoIP2 when a license is set
* **Lookup table** — hourly batch (:ref:`WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH`) that back-fills PTR / geo for stored events

If WP-Cron does not run, the address lists and geolocation data become stale and Site Health reports a failure. When WordPress cron spawning is disabled, arrange for the host scheduler to invoke ``wp-cron.php`` regularly.
