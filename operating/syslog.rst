.. _operating_syslog:

Syslog and journald
===================

|WPf2b| opens syslog with :ref:`WP_FAIL2BAN_OPENLOG_OPTIONS` (default ``LOG_PID|LOG_NDELAY``) and a tag of ``wordpress`` (or ``wp`` if :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` is set). The HTTP host can be appended to the tag or, for journald, moved into the message body.

**journald detection.** If the journal socket is reachable, or :ref:`WP_FAIL2BAN_USING_JOURNALD` says so, |WPf2b| treats the host as journald. The Journald QuickStart card may disable itself when detection fails. :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST` puts the site name in the message so journal identifiers stay short enough for systemd.

**Workarounds** for broken syslogd: short tag, force ``HTTP_HOST``, truncate the host, tag-host. Use them only when the daemon cannot cope with the default identifier.

Facility defaults differ between Free and Premium; see :ref:`facilities`. Do not copy OS logfile path tables from older manuals — they go stale. Life With WPf2b has current paths.

Jail ``journalmatch`` examples also live in Life With WPf2b.
