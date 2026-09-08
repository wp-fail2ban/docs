.. _about_how_it_works:

How WP fail2ban works
=====================

The chain is always:

1. WordPress handles a request.
2. |WPf2b| classifies it (login, comment, XML-RPC, …) and may refuse it.
3. A line is written to **syslog** (or journald).
4. **fail2ban** matches that line with a shipped filter.
5. fail2ban updates the **firewall**.

|WPf2b| owns steps 2–3 and ships the filter text for step 4. You own the jail, the log path or journal match, and the ban action. Verifying the chain means: the plugin is loaded, syslog shows a known message, and fail2ban’s filter counts that message. Installation checklists and OS jail snippets live in Life With WPf2b; this manual states what a healthy 6.3 install must emit.

Settings come from ``define()`` in ``wp-config.php`` and, in Premium, from the settings UI. A defined constant always wins. See :ref:`configuration_how_settings_are_resolved`.
