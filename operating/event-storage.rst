.. _operating_event_storage:

Using Premium event history
===========================

Premium event history lets an administrator look back at earlier activity, investigate a pattern, and use the Dashboard and reports after messages have passed through the immediate host log stream. It stores structured events in the WordPress database. fail2ban still reads syslog or the journal for bans; the database history serves investigation and reporting.

The main event row is small and should normally be present for an event Premium records. If its insert fails, the absent event leaves no marker in the history, so the history cannot identify a row it never received. This should be exceptional: failure to write a small row would normally point to database failure, severe resource pressure, or a host condition likely to affect ordinary WordPress operation as well. Use the host log and database health when investigating a suspected gap.

Premium also maintains lookup rows that classify and index events for reporting. A missing or delayed lookup row does not mean its main event row was lost; the hourly job fills missing lookup rows. It does not add country or PTR values to old events. See :ref:`operating_scheduled`.

Some events have associated detail records, including WAF evidence and details from other features. These records can be substantially larger than a main event row and can include attacker-controlled request content. Storage or resource limits therefore matter more for detail records. A main event visible without its expected detail is possible if the separate detail write fails; investigate database errors and available storage when that happens. The retained evidence may be sensitive, so access to the history and its backups matters.

Event history persists until it is deleted. Deactivating Premium does not remove its tables, and events have no automatic expiry. The Premium event list provides bulk deletion for manual cleanup. The main event table is timestamped, so a database administrator can also use ordinary database tools to archive or delete records by age. An archive must include any related detail or lookup records it needs before deleting the main rows, because those rows are linked by foreign keys and are deleted with their main events. Choose a retention method that accounts for the database's growth. :ref:`feature-event-store` describes the feature's controls.
