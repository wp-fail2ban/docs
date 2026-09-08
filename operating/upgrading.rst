.. _operating_upgrading:

Upgrading
=========

Upgrade the plugin with the same channel you used to install it (GitHub self-updater, Composer, wp.org, Freemius). Then:

1. Read the release notes for filter changes (SemVer, :ref:`operating_filters`).
2. Run Site Health.
3. Confirm a known event still hits syslog.

Premium never drops ``wp_fail2ban_log``. Constants removed in 6.0 (:ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA` and friends) still trigger Site Health if they linger in ``wp-config.php``.

Environment work (new systemd unit, new Cloudflare plan, new panel) is not an upgrade of this plugin — use Life With WPf2b.
