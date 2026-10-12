.. _operating_event_storage:

Using Premium event history
===========================

Premium event history lets an administrator review earlier logins, blocked requests, comments, and other recorded events through the Dashboard and reports. It stores those records in the WordPress database after the immediate syslog message has passed. fail2ban still reads syslog or the journal for bans; it does not read this database history.

What the history contains
-------------------------

Premium first stores a main row for each event. Besides the event's basic fields, this row can contain captured request bodies and headers when the event type or configuration selects them. This write should normally succeed; failure would generally indicate database trouble, severe resource pressure, or another host condition likely to affect ordinary WordPress operation. If activity appears in the host log but not in event history, check database health alongside the log.

Premium also maintains lookup rows that classify and index events for reporting. These rows are separate from the main history: the hourly job backfills missing rows in configured batches. It does not add country or PTR values to old events. See :ref:`operating_scheduled`.

Some events also have a separate detail record, including events with WAF, authentication, comment, pingback, or trackback details. This record can contain attacker-controlled request content and may be large. A main event can appear without its expected detail if the separate write fails; investigate database errors and available storage when that happens. Captured request data in either row may be sensitive and can increase database growth, so access to the history and its backups matters. See :ref:`operating_privacy_and_stored_data` for the full data inventory and protection considerations.

Retention and deletion
----------------------

Event history persists until it is deleted. Deactivating Premium does not remove its tables, and events have no automatic expiry. The Premium event list provides bulk deletion for manual cleanup. The main event table is timestamped, so a database administrator can also use ordinary database tools to archive or delete records by age. An archive must include any related detail or lookup records it needs before deleting the main rows, because those rows are linked by foreign keys and are deleted with their main events. Choose a retention method that accounts for the database's growth. :ref:`feature-event-store` describes the feature's controls.
