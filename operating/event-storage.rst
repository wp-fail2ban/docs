.. _operating_event_storage:

Premium event storage
=====================

Premium records each event in ``wp_fail2ban_log`` and stores WAF or honeypot details in ``wp_fail2ban_waf``. The stored data feeds the Dashboard and reports. Integrations receive supported fields through :ref:`developers_events_event-data` and the ``WPF2B_EVENT_*`` actions.

Operational controls include:

* Extra fields (URL, referer, user-agent, POST, headers, PTR) via the ``WP_FAIL2BAN_EX_LOG_*`` constants — they increase volume
* The hourly lookup job (see :ref:`operating_scheduled`)
* The fact that tables are created on activate and never dropped

See :ref:`feature-event-store` for the related configuration constants.
