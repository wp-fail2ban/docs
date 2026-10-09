.. _feature-event-store:

Event store
===========

Premium keeps a database history of |WPf2b| events so operators can review earlier logins, comments, blocks, and WAF detections in the Dashboard and reports. This complements the immediate syslog message: fail2ban continues to read the host log or journal, not this history.

Every stored event provides basic context for what happened, including its time, type, and resolved client address. Optional switches can add more request information to help investigate it, and some event types record further details of their own. This additional data can be sensitive; :ref:`operating_privacy_and_stored_data` describes what can be stored and how to protect it.

Event history is best-effort by design: |WPf2b| preserves as much useful history as it can even when the site is under pressure. It writes the main event entry first and then any separate detail. The main entry should normally succeed; if it cannot be written, that generally points to database trouble, severe resource pressure, or another significant host problem likely to affect the site more broadly. A later write can fail independently, so an event may appear without all of its detail. The host log may therefore contain a message for which the history has no complete record.

Event history remains until it is deleted. :ref:`operating_event_storage` explains storage, retention, deletion, and database copies.

.. include:: ../autogen/join/feature-event-store.rst
   :end-before: Source
