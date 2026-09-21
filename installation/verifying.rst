.. _installation_verifying:

Verifying the installation
==========================

Verify the path from a WordPress request to the host firewall. Use a client address you can safely test and avoid locking yourself out. A failed form login with a non-blank username and password is a useful soft-filter example; repeat it enough times to meet the test jail's threshold.

1. Confirm that |WPf2b| is loaded, then make the test request. Its Dashboard Last 5 messages view can help show recent local logging activity, but the host log is the next checkpoint.
2. Find the corresponding human-readable message in the actual syslog file or journal. If it is absent, check the host logging service and facility routing described in :ref:`operating_logging`.
3. Confirm that the intended jail reads that source and its installed filter matches the message. ``fail2ban-regex`` can test the selected filter against the host log or journal; :ref:`configuration__fail2ban` shows examples.
4. Check that the live jail counts the matching requests, then exercise its threshold. ``fail2ban-client status wordpress-soft`` can show the count and banned addresses for the example jail.
5. Confirm that the configured ban action changes the intended firewall state. Check the host's firewall using its administrative tools, and confirm that the test ban expires or is removed as expected. If necessary, use ``fail2ban-client`` to clear the test ban.

Site Health can expose some setup mistakes when PHP is allowed to inspect the host, but its results cover only the checks that ran. See :ref:`operating_site_health`. The host log, live jail, and firewall checks establish whether the complete integration works.
