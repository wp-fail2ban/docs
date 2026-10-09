.. _operating_event_storage:

Using Premium event history
===========================

Premium event history lets an administrator review earlier logins, blocked requests, comments, and other recorded events through the Dashboard and reports. It stores those records in the WordPress database after the immediate syslog message has passed. fail2ban still reads syslog or the journal for bans; it does not read this database history.

What the history contains
-------------------------

Premium first stores a small main row for each event. This write should normally succeed; failure would generally indicate database trouble, severe resource pressure, or another host condition likely to affect ordinary WordPress operation. If activity appears in the host log but not in event history, check database health alongside the log.

Premium also maintains lookup rows that classify and index events for reporting. These rows are separate from the main history: the hourly job fills any that are missing. It does not add country or PTR values to old events. See :ref:`operating_scheduled`.

Some events have associated detail records, including WAF data and authentication, comment, pingback, or trackback details. These records can be substantially larger than a main event row and can include attacker-controlled request content. Storage or resource limits therefore matter more for detail records. A main event can appear without its expected detail if the separate detail write fails; investigate database errors and available storage when that happens. The stored values may be sensitive, so access to the history and its backups matters.

Retention and deletion
----------------------

Event history persists until it is deleted. Deactivating Premium does not remove its tables, and events have no automatic expiry. The Premium event list provides bulk deletion for manual cleanup. The main event table is timestamped, so a database administrator can also use ordinary database tools to archive or delete records by age. An archive must include any related detail or lookup records it needs before deleting the main rows, because those rows are linked by foreign keys and are deleted with their main events. Choose a retention method that accounts for the database's growth. :ref:`feature-event-store` describes the feature's controls.
