.. _extending_plugin_integration:

Plugin integration
==================

To log from a third-party plugin:

1. Hook ``wp_fail2ban_register`` and call ``wp_fail2ban_register_plugin``.
2. Register one or more messages with ``wp_fail2ban_register_message`` (or ``wp_fail2ban_register_messages``).
3. Emit with ``wp_fail2ban_log_message``.

Registration records the message metadata. |WPf2b| supplies substitution,
syslog, and Premium event infrastructure, but it does not generate a fail2ban
rule for the integration or validate runtime substitutions against registered
regular expressions. The integration must supply and maintain its own fail2ban
filter and pass the correct substitutions. The registered ``fail`` value and
regular expressions are metadata; they do not replace that filter.

On Premium, core events use documented ``WPF2B_EVENT_*`` actions. For a plugin
message, show the **Event Name** column on the **Plugins** tab (hidden by
default) and copy the opaque action identifier. Both receive
:ref:`developers_events_event-data`.

Full signatures, examples, and event-class values: :ref:`developers`.
