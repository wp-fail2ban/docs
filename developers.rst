.. _developers:

=============
Developer API
=============

Plugins can log through these public interfaces:

* ``wp_fail2ban_register`` — hook to register on
* ``wp_fail2ban_register_plugin``
* ``wp_fail2ban_register_message`` / ``wp_fail2ban_register_messages``
* ``wp_fail2ban_log_message``
* ``WPF2B_EVENT_*`` and ``WPF2B_PLUGIN_EVENT_*`` actions (Premium), argument :ref:`developers_events_event-data`
* ``WPF2B_EVENT_*`` / ``WPF2B_PLUGIN_EVENT_*`` constants for event ids

.. toctree::
   :maxdepth: 1

   developers/api/overview
   developers/api/register-plugin
   developers/api/register-message
   developers/api/log-message
   developers/api/example
   developers/events
   developers/events/event-data
