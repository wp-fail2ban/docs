.. _about_how_it_works:

How WP fail2ban works
=====================

The chain is always:

1. WordPress handles a request.
2. |WPf2b| classifies it (login, comment, XML-RPC, …) and may refuse it.
3. A line is written to **syslog** (or journald).
4. **fail2ban** matches that line with a shipped filter.
5. fail2ban updates the **firewall**.

|WPf2b| performs steps 2–3 and supplies the filters for step 4. A fail2ban jail combines one of those filters with a log source, retry threshold, and ban action. See :ref:`configuration__fail2ban` for a working configuration and :ref:`installation_verifying` for the complete verification path.

Settings come from ``define()`` in ``wp-config.php`` and, in Premium, from the settings UI. A defined constant always wins. See :ref:`configuration_how_settings_are_resolved`.
