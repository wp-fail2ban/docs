.. _configuration__site-health-tool:

Configuring Site Health visibility
==================================

|WPf2b| adds checks to WordPress Site Health for setup and troubleshooting.
Some checks can compare the shipped filters with host copies only when PHP is
allowed to inspect fail2ban's configuration. WordPress should not have write
access to those files, and a hardened host may deliberately deny even read
access. In that case, the check may be absent; use host-side tools to inspect
fail2ban instead. See :ref:`operating_site_health`.

If fail2ban is installed in a non-standard location that PHP can already read, :ref:`WP_FAIL2BAN_INSTALL_PATH` identifies that installation directory for the checks. If the host intentionally prevents PHP from reading it, it is sensible to set :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS` so Site Health omits filter comparisons that cannot offer useful results. This is optional; leaving them enabled is harmless. Do not widen chroot, container, or filesystem permissions solely to make a Site Health result appear.
