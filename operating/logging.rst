.. _operating_logging:

Logging and events
==================

Every security-relevant decision |WPf2b| makes becomes a syslog line and, on Premium, a row in the event store. Each occurrence has an event name such as ``AUTH_FAIL`` or ``XMLRPC_BLOCKED``; fail2ban matches the corresponding syslog message. :ref:`events` lists both.

Core login logging is always on. Other classes are opt-in via QuickStart or Advanced settings.

The Dashboard last-five-messages widget shows recent syslog writes and can be disabled with :ref:`WP_FAIL2BAN_DISABLE_LAST_LOG`. Premium's event log and reports use the database event store. The hourly lookup job that enriches stored events is described in :ref:`operating_scheduled`.

Full event catalogue: :ref:`events`.
