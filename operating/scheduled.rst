.. _operating_scheduled:

Scheduled maintenance
=====================

Premium runs WordPress cron work that is part of this release:

* **Cloudflare IP list** — refresh :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS` unless you defined the escape hatch yourself
* **Jetpack IP list** — same pattern for :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK_IPS`
* **MaxMind database** — refresh GeoLite/GeoIP2 when a license is set
* **Lookup table** — hourly batch (:ref:`WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH`) that back-fills PTR / geo for stored events

If cron is disabled or WP-Cron never runs, lists go stale and Site Health will say so. How you schedule cron on a given host is an environment topic.
