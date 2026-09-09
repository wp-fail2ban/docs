.. _feature-event-store:

Event store
===========

Premium records events in its database for the Dashboard and reports. PTR, URL, referer, user-agent, POST data, and headers are optional because they increase storage volume. The lookup-table batch size controls the hourly back-fill job.

See :ref:`operating_event_storage` for maintenance and :ref:`developers_events_event-data` for the supported event data available to integrations.

.. include:: ../autogen/join/feature-event-store.rst
   :end-before: Source
