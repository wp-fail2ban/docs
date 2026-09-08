.. _operating_event_storage:

Premium event storage
=====================

Premium records each event in ``wp_fail2ban_log`` (and WAF/honeypot extra data in ``wp_fail2ban_waf``). That store feeds the Dashboard and reports. Column layouts are not a supported integration surface; use :ref:`developers_events_event-data` and the ``WPF2B_EVENT_*`` actions.

What you **do** operate:

* Extra fields (URL, referer, user-agent, POST, headers, PTR) via the ``WP_FAIL2BAN_EX_LOG_*`` constants — they increase volume
* The hourly lookup job (see :ref:`operating_scheduled`)
* The fact that tables are created on activate and never dropped

REST/admin map UIs and “clear the cache” workflows are Life With WPf2b. The feature reference is :ref:`feature-event-store`.
