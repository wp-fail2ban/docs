.. _operating_site_health:

Using Site Health
=================

During setup and troubleshooting, WordPress Site Health can point out some |WPf2b| configuration mistakes. Depending on what PHP can inspect, it may report on plugin activation, obsolete settings, selected installed filters, fail2ban service visibility, QuickStart conflicts, or Premium maintenance data. Use a reported issue to investigate the named component, then verify the host path with :ref:`installation_verifying`.

Site Health only runs checks for which the WordPress/PHP environment has enough visibility. It cannot certify every shipped filter, the jail's log source and policy, or the firewall action. A clean result means the checks that ran found no issue; it does not establish end-to-end enforcement.

On a hardened host, PHP may deliberately be unable to read fail2ban configuration or inspect the host service. The corresponding checks can be absent, which is expected isolation rather than degraded |WPf2b| health. If PHP is known to be unable to read the fail2ban files, it is sensible to skip the filter comparisons with :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS`. They cannot provide a useful result there, so repeating them adds no value; leaving them enabled is harmless.

Do not weaken chroot, container, or file permissions just to restore a check. Use ``fail2ban-client``, the host log or ``journalctl``, and firewall administration tools to check the external path after hardening. :ref:`configuration__site-health-tool` describes the settings for filter-check visibility.
