.. _installation_requirements:

Requirements
============

|WPf2b| 6.3 supports WordPress running on PHP 8.1 or later. The host needs a working syslog path, or a systemd journal receiving syslog messages, that fail2ban can read. A host administrator needs permission to install the shipped filters and configure fail2ban jails and their firewall action. WordPress itself should not have that permission.

Premium requires MySQL 5.7 or later or MariaDB 10.2 or later, with support for InnoDB tables, foreign keys, and JSON columns. Premium checks the database version during activation and stops if the server does not meet the minimum. Activation creates four tables for events, lookup data, plugin registrations, and event details, plus a reporting view. Check the required database capabilities and capacity before activation; event history remains until it is deleted.

Country features need a configured country-data source, such as MaxMind data or the relevant Cloudflare country information; see :ref:`WP_FAIL2BAN_EX_GEOLOCATION`. Log locations and firewall actions depend on the host, so the installation must be verified against the actual host configuration.
