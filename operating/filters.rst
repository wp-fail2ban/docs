.. _operating_filters:

Maintaining fail2ban filters
============================

The filters used by fail2ban are privileged host configuration. WordPress should not be able to replace them. An update to |WPf2b| changes the source files in the plugin's ``filters.d`` directory; a host administrator must copy required changes into fail2ban's ``filter.d`` directory, validate the configuration, and reload fail2ban.

Read the release notes when upgrading, and follow any filter-update instructions they contain. Keep local changes in ``*.local`` files or a separately named custom filter, and review those changes against new shipped rules.

After copying filters, run ``fail2ban-client -t`` and ``fail2ban-client reload``. Compare the host copies with the plugin source copies when necessary, then test a known message against the installed filter and confirm the live jail sees it. :ref:`configuration__fail2ban` shows the host setup, and :ref:`installation_verifying` takes the check through to the firewall. Site Health may compare some host copies when PHP can read them; see :ref:`operating_site_health` for the limits of that check.

The filter expressions and captures are listed in :ref:`reference_filters`.
