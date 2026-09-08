.. _feature-event-store:

Event store
===========

Premium database log of events. Extra columns (PTR, URL, referer, user-agent, POST, headers) are opt-in because they are large. The lookup-table batch size controls the hourly back-fill job.

Schema dumps are not part of this manual. Operate the store via :ref:`operating_event_storage`; read it via :ref:`developers_events_event-data`.

.. include:: ../autogen/join/feature-event-store.rst
