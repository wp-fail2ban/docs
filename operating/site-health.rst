.. _operating_site_health:

Site Health
===========

|WPf2b| registers WordPress Site Health tests. They are the supported “is this install healthy?” surface.

Free / all editions (test ids):

* ``wp_fail2ban_mu_ensure_active`` — activate the ordinary plugin when running as MU-plugin
* ``wp_fail2ban_log_comments_extra_obsolete`` / ``wp_fail2ban_comments_extra_log_obsolete`` — removed 6.0 constants still defined
* ``wp_fail2ban_running`` — fail2ban looks running
* ``wp_fail2ban_filter_obsolete`` / ``wp_fail2ban_filter_modified`` / ``wp_fail2ban_filter_missing`` — shipped filters vs what fail2ban has (skipped when :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS` is true, or when PHP cannot see the fail2ban directory)
* ``wp_fail2ban_quickstart_failures`` — a card could not apply because a constant is already defined

Premium:

* ``wp_fail2ban_premium_cloudflare`` — Cloudflare IP list freshness
* ``wp_fail2ban_premium_database_lookup_table`` — lookup table job

Non-standard fail2ban paths: :ref:`WP_FAIL2BAN_INSTALL_PATH`. ``open_basedir`` / chroot / SELinux often make the filter tests useless; skip them rather than widening PHP’s filesystem view. More detail: :ref:`configuration__site-health-tool`.
