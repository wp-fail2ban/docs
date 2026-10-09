.. _operating_logging:

Logging and observing activity
==============================

|WPf2b| uses syslog because the host already has a logging system that administrators can inspect and fail2ban can read. For a selected WordPress event, such as a failed login, |WPf2b| writes a human-readable message to syslog. The host places that message in a log file or the systemd journal. An administrator can read what happened, and a fail2ban filter can recognise the same line.

The enforcement path
--------------------

Syslog facilities let the host separate broad classes of messages. A simple installation can route all relevant |WPf2b| facilities to the same log source. On a busier host, an administrator may direct classes to different files or streams. The host's log rotation or journal retention settings provide the ordinary way to manage how long those records remain. In either case, the jail must read the source where its class actually arrives. Changing a facility or host routing without updating the corresponding jail can leave visible messages that the jail never sees. See :ref:`facilities` for exact facility values and :ref:`operating_syslog` for identifier and journal details.

Filters recognise particular |WPf2b| messages. A jail reads a log source, counts lines matched by its filter, and invokes a ban action when its threshold is reached. That action changes the host firewall. An administrator can inspect or clear the jail's bans with ``fail2ban-client`` and check the resulting firewall state with the host's firewall tools. A message's syslog priority is not a ban threshold; the filter and jail configuration decide how it is counted. See :ref:`configuration__fail2ban` for example jails.

WordPress views
---------------

WordPress offers two additional views, each for a different job. **Last 5 messages** provides a quick Dashboard view of recent local |WPf2b| logging activity. It is bounded and can omit or overwrite entries during concurrent traffic, so it is not a substitute for the host log. The view can be disabled with :ref:`WP_FAIL2BAN_DISABLE_LAST_LOG` if it is not useful on the site.

**Premium event history** stores searchable database records for the Dashboard, reports, and later investigation. fail2ban does not read it. See :ref:`operating_event_storage` for the stored rows, retention, and deletion.

Tracing a missing ban
---------------------

When an expected ban does not occur, follow the sequence in order. First make a request known to produce a |WPf2b| message. Find that message in the actual host log or journal; if absent, inspect syslog service health and facility routing. Then check that the intended jail reads that source, that its installed filter matches the line, and that the jail counts it. Finally, exercise the threshold and inspect the configured ban action and firewall state. :ref:`installation_verifying` gives a complete test sequence. A Last 5 entry or Premium event can confirm that WordPress saw the request, but the host-side checks show where enforcement stopped.
