.. _operating_logging:

Logging and events
==================

Every interesting decision |WPf2b| makes becomes a syslog line and, on Premium, a row in the event store. The **event** is the durable name (``AUTH_FAIL``, ``XMLRPC_BLOCKED``, …). The syslog **message** is what fail2ban matches. Both are on the event’s reference page.

Core login logging is always on. Other classes are opt-in via QuickStart or Advanced settings.

The Dashboard last-five-messages widget (unless disabled with :ref:`WP_FAIL2BAN_DISABLE_LAST_LOG`) is a recent-syslog convenience. It is not the event log and it is not a map. Country reports and the lookup-table admin UI are environment/ops topics; the hourly lookup job is :ref:`operating_scheduled`.

Full event catalogue: :ref:`events`.
