.. _operating_syslog:

Syslog and the systemd journal
==============================

|WPf2b| writes through PHP's normal syslog functions. The host logging configuration decides whether those messages appear in a file, the systemd journal, or both. The selected facility affects routing; :ref:`facilities` lists the exact values. Check the host destination before setting a jail's ``logpath`` or journal backend.

The default syslog identifier is ``wordpress(host)``, with a host component that varies by site name. Journal selection by ``SYSLOG_IDENTIFIER`` uses exact values: ``journalctl`` and fail2ban's journal match cannot use a pattern such as ``wordpress(*)`` to cover both ``wordpress(example.com)`` and ``wordpress(www.example.com)``. A multisite installation can have still more identifiers.

Inline-host formatting puts the host in the readable message and leaves a stable ``wordpress`` identifier, so one journal selector can cover the sites. The shipped filters use ``SYSLOG_IDENTIFIER=wordpress`` for that reason. Short-tag mode changes the identifier to ``wp`` instead, so the installed journal match must use ``wp`` when that mode is enabled. Inspect an actual message with ``journalctl`` to confirm the identifier before configuring the jail. See :ref:`configuration__fail2ban`.

:ref:`WP_FAIL2BAN_USING_JOURNALD` controls |WPf2b|'s detection state or an override for that state. It does not select a different socket or transport: messages still use PHP syslog and the host's routing. The default ``openlog()`` options are ``LOG_PID|LOG_NDELAY``; see :ref:`WP_FAIL2BAN_OPENLOG_OPTIONS` for that setting. Identifier controls such as :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST` and :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` are useful when the host journal selector or logger needs a different tag.

If a message appears in Last 5 but not the host log, start with the host logging path. Last 5 records recent local logging activity and is not a journal reader. If the message is in the journal but the jail has no count, compare the actual ``SYSLOG_IDENTIFIER`` with the filter's ``journalmatch`` before testing its message expression.
