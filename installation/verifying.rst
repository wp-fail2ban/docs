.. _installation_verifying:

Verifying the installation
==========================

You are checking the **product** chain, not an apt recipe.

1. The plugin is active (or loaded as MU-plugin).
2. A known event produces a syslog line |WPf2b| documents — the simplest is a failed login, which always logs. The message looks like ``Authentication failure for … from …``.
3. That line is in the facility you configured (:ref:`WP_FAIL2BAN_AUTH_LOG`, typically ``LOG_AUTH`` / ``LOG_AUTHPRIV``).
4. fail2ban has the matching shipped filter (``wordpress-soft.conf`` for that example) and a jail that reads the same stream.
5. Site Health is clean, or the failures are ones you understand. See :ref:`operating_site_health`.

If step 2 works and step 4 does not, the plugin is fine and the environment is not. Life With WPf2b covers journald vs syslogd and panel-specific log paths.

On Premium, the Dashboard last-messages widget is a convenience view of recent syslog writes, not a substitute for the journal.
