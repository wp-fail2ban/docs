.. _developers_api_overview:

Overview
--------

The API lets a third-party plugin send its own messages to syslog and, on Premium, store corresponding events. Register the plugin, register one or more message definitions, then log each event as it happens. See the pages in :ref:`developers` for the complete interfaces.

Design
""""""

The API uses WordPress actions, so integration code does not need to import |WPf2b| files or call its functions directly. If |WPf2b| is absent, WordPress accepts the action call and no |WPf2b| listener runs.

.. note::
   Because ``do_action`` has no return value, registration and logging errors are reported as exceptions.
