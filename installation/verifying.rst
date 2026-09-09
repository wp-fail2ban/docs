.. _installation_verifying:

Verifying the installation
==========================

1. The plugin is active (or loaded as MU-plugin).
2. A failed login produces a syslog line such as ``Authentication failure for … from …``.
3. That line is in the facility you configured (:ref:`WP_FAIL2BAN_AUTH_LOG`, typically ``LOG_AUTH`` / ``LOG_AUTHPRIV``).
4. fail2ban has the matching shipped filter (``wordpress-soft.conf`` for that example) and a jail that reads the same stream.
5. ``fail2ban-client status wordpress-soft`` shows the jail and its failure count increases when the line is received.
6. Site Health is clean, or the failures are ones you understand. See :ref:`operating_site_health`.

If the message is logged but the jail does not count it, confirm the jail's ``logpath`` or ``backend`` and test the message with ``fail2ban-regex``. See :ref:`configuration__fail2ban`.

On Premium, the Dashboard last-messages widget is a convenience view of recent syslog writes, not a substitute for the journal.
