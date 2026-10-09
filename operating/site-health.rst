.. _operating_site_health:

Using Site Health
=================

|WPf2b| adds tests to WordPress's standard Site Health system. They provide a WordPress-side check of the parts of the installation and configuration that PHP can observe, and are most useful during setup and troubleshooting.

The filter tests run unless they are explicitly disabled because PHP cannot reliably distinguish a missing fail2ban filter from one that the host deliberately keeps outside WordPress's view. On a hardened host, an inaccessible filter can therefore be reported as missing. If PHP is intentionally unable to read the fail2ban files, skip those comparisons with :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS`; :ref:`configuration__site-health-tool` describes the related settings.

Do not weaken chroot, container, or file permissions merely to make a Site Health test pass. A clean result means only that the checks which ran found no reported issue; Site Health cannot establish that a message reached the intended log, that a jail counted it, or that the ban action changed the firewall. Use :ref:`installation_verifying` and host-side tools to verify that complete path.
