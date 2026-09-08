.. _extending_plugin_integration:

Plugin integration
==================

To log from a third-party plugin:

1. Hook ``wp_fail2ban_register`` and call ``wp_fail2ban_register_plugin``.
2. Register one or more messages with ``wp_fail2ban_register_message`` (or ``wp_fail2ban_register_messages``).
3. Emit with ``wp_fail2ban_log_message``.

On Premium, listen for ``WPF2B_EVENT_*`` / ``WPF2B_PLUGIN_EVENT_*`` and receive :ref:`developers_events_event-data`. There is no supported ``wp_fail2ban_event`` API.

Full signatures, examples, and event-class values: :ref:`developers`.
