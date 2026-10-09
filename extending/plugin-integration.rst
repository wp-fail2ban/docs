.. _extending_plugin_integration:

Plugin integration
==================

To log from a third-party plugin:

1. Hook ``wp_fail2ban_register`` and call ``wp_fail2ban_register_plugin``.
2. Register one or more messages with ``wp_fail2ban_register_message`` (or ``wp_fail2ban_register_messages``).
3. Emit with ``wp_fail2ban_log_message``.

Registration records the message template and its fields. When the integration
logs the message, |WPf2b| substitutes the supplied values, writes the result to
syslog, and stores the corresponding Premium event. It does not generate a
fail2ban rule or validate the supplied values against the registered regular
expressions. The integration must pass the correct substitutions and ship and
maintain the filter that recognises its message.

On Premium, core events use documented ``WPF2B_EVENT_*`` actions. For a plugin
message, show the **Event Name** column on the **Plugins** tab (hidden by
default) and copy the opaque action identifier. Both receive
:ref:`developers_events_event-data`.

Full signatures, examples, and event-class values: :ref:`developers`.
