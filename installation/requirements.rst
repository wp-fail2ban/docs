.. _installation_requirements:

Requirements
============

* WordPress on PHP 7.4 or later (Canonical/Premium track current WordPress; the LTS flavour stays on 7.4 as long as it can)
* A syslog daemon **or** journald that fail2ban can read
* fail2ban with permission to install the shipped ``filters.d`` files
* For Premium country blocking: a MaxMind license and/or Cloudflare country headers, depending on :ref:`WP_FAIL2BAN_EX_GEOLOCATION`

|WPf2b| does not require a particular Linux distribution. Logfile paths and jail snippets are environment-versioned; they are not frozen in this manual.
