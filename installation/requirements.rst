.. _installation_requirements:

Requirements
============

* WordPress on PHP 7.4 or later
* A syslog daemon **or** journald that fail2ban can read
* permission to copy the shipped filters into fail2ban's ``filter.d`` directory
* For Premium country blocking: a MaxMind license and/or Cloudflare country headers (with Trust Cloudflare), depending on :ref:`WP_FAIL2BAN_EX_GEOLOCATION`

|WPf2b| does not require a particular Linux distribution. The syslog or journal path depends on how the host routes the selected facility.
