.. _developers:

=============
Developer API
=============

Plugins can log messages, and Premium integrations can listen for events,
through these public interfaces:

* ``wp_fail2ban_register`` — hook to register on
* ``wp_fail2ban_register_plugin``
* ``wp_fail2ban_register_message`` / ``wp_fail2ban_register_messages``
* ``wp_fail2ban_log_message``
* documented ``WPF2B_EVENT_*`` actions and opaque plugin event actions
  (Premium), with :ref:`developers_events_event-data`

Event action identifiers are strings, not PHP event-ID constants. Obtain the
exact action identifier from the **Event Name** column on the Premium
**Plugins** tab; the column is hidden by default.

.. toctree::
   :maxdepth: 1

   developers/api/overview
   developers/api/register-plugin
   developers/api/register-message
   developers/api/log-message
   developers/api/example
   developers/events
   developers/events/event-data
