.. _feature-site-health:

Site Health
===========

|WPf2b| adds checks to WordPress's standard Site Health system, giving an operator a WordPress-side view of configuration and maintenance problems that PHP can observe. This provides a useful starting point during setup and troubleshooting before moving to host-side tools.

Some checks compare |WPf2b|'s shipped fail2ban filters with the copies installed
on the host. Those copies are privileged host configuration; on a properly
secured host, WordPress cannot change them, so a host administrator must install
and update them. Where PHP can read the copies, Site Health can report one that
is missing or outdated.

Site Health cannot inspect host state that PHP cannot see or demonstrate that a message travelled through fail2ban and changed the firewall. A clean result means only that the checks which ran found no reported issue. :ref:`operating_site_health` explains how to interpret the filter checks and verify the complete path without granting PHP more access.

.. include:: ../autogen/join/feature-site-health.rst
   :end-before: Source
