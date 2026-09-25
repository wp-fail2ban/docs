.. _feature-event-store:

Event store
===========

Premium keeps structured event history so operators can investigate WordPress activity after the immediate syslog message has passed. Events can carry the time, event type, site, resolved address, available country, and event-specific identity or reference information. Some also retain request context or detail useful for understanding an authentication, comment, WAF, or other occurrence. This history supports Dashboard and report views; it is separate from local syslog attempts and from fail2ban's jail state.

Optional controls can add request targets, Referer, User-Agent, raw request body, headers, and PTR information. The controls are not an absolute privacy boundary: success events may retain method and request metadata when those individual controls are off, and WAF events may additionally retain body and headers. Available headers can include cookies or authorisation material; failed authentication and WAF detail can contain passwords, SQL, or option values. The event tables and backups therefore contain sensitive data; :ref:`operating_privacy_and_stored_data` brings the complete storage boundary together.

Event history is best-effort. An occurrence may be absent if it could not be stored, and a visible event may lack some of its attempted detail. Missing history or detail therefore does not establish that the occurrence did not happen or that the information was unavailable when it occurred.

The store increases database space and write work as event volume rises, particularly when request bodies, headers, or WAF detail are recorded. It has no automatic event-row expiry in 6.3. Operators can manage retention and database copies using :ref:`operating_event_storage`. The stored sensitive data is unencrypted in the WordPress database in 6.3.

.. include:: ../autogen/join/feature-event-store.rst
   :end-before: Source
