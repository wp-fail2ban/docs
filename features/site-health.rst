.. _feature-site-health:

Site Health
===========

|WPf2b| ships fail2ban filters, but the copies used by fail2ban are installed and updated by a privileged host administrator. WordPress deliberately does not need permission to modify that host configuration. A plugin update can therefore leave the installed filters behind, or a WordPress setting can appear correct while the host is missing a filter or running an incompatible copy.

WP fail2ban's Site Health checks expose the parts of that setup, QuickStart state, and scheduled data which WordPress and PHP can inspect, helping an operator find configuration drift before relying on the protection. Host configuration and external data may still be invisible to PHP. An omitted check was not run, provides no assessment of that component, and does not change runtime behaviour. A clean result means only that the checks which ran found no reported issue; it does not establish that a message reached fail2ban or changed the firewall.

Hardened hosts may deliberately prevent WordPress from reading fail2ban configuration. :ref:`operating_site_health` describes the available checks and host-side verification without weakening that boundary.

.. include:: ../autogen/join/feature-site-health.rst
   :end-before: Source
