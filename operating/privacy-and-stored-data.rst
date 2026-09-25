.. _operating_privacy_and_stored_data:

Privacy and stored data
=======================

Premium event history can retain security evidence that is also personal,
confidential, or credential-bearing data. The ordinary event row identifies
the time, event, site, resolved client address, and available country, together
with event-specific usernames, references, or other identity data. Free does
not have this database event store.

Some rejected authentication paths retain the submitted password. Successful
authentication events do not store the submitted password field, but request
content can contain another copy. Success events also select the request
method, request target, Referer, and User-Agent when those values are available,
even when their individual extra-field controls are off.

Optional request-body capture stores the raw body that PHP makes available,
without a |WPf2b| size limit, redaction, or truncation step. Optional header
capture can include cookies or ``Authorization`` material when the server
exposes it. Request targets can include query strings. These values are
requester-controlled, so enabling their capture can increase database growth
and lets remote traffic influence the amount of data stored for each event.

WAF events select the request body and most available HTTP headers
independently of the general body and header controls. SQL injection evidence
can contain full SQL, and option-protection evidence can contain the full
proposed value. Either can include credentials or other sensitive values.
Event-specific detail records are also used by authentication, comment,
pingback, and trackback producers; their historical database name does not
limit them to WAF data. PTR enrichment, when enabled, is resolved and stored
while the event is created.

The main event row and any detail row are separate database writes. An event
can therefore appear without its attempted detail, and an event action does not
prove that either write succeeded. The history is useful operational evidence,
not a complete audit ledger.

|WPf2b| 6.3 does not automatically expire event rows. Deactivation leaves the
tables in place, and database backups retain the same sensitive data as the
live tables. Sensitive event data is stored unencrypted in the WordPress
database. Treat the event tables and backups according to the access,
retention, and deletion decisions appropriate for that data. Encryption of
sensitive stored event data is planned for a future release.

See :ref:`operating_event_storage` for archiving, deletion, table relationships,
and storage growth.
