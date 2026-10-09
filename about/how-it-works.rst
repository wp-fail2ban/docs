.. _about_how_it_works:

How WP fail2ban works
=====================

|WPf2b| turns selected WordPress activity into human-readable syslog messages that fail2ban can use. As WordPress handles a request, |WPf2b| recognises events such as failed logins, blocked username lookups, and spam comments, and sends the corresponding message to syslog. The host logging service records it in a log file or the systemd journal, where administrators can read it and fail2ban can use it.

The shipped fail2ban filters match |WPf2b|'s messages. A jail combines a filter with the log source it reads, a counting policy, and a ban action. When the jail's conditions are met, fail2ban runs that action, normally changing the host firewall. This is how WordPress activity can lead to an address being banned without giving WordPress control of the firewall.

Premium also stores structured events in the WordPress database for the Dashboard, reports, and later investigation.

To make the sequence work, send |WPf2b| messages to the file or journal read by the jail, install the shipped filters on the host, and configure the jail and its action. See :ref:`operating_logging` for the message-to-ban sequence, :ref:`configuration__fail2ban` for host configuration, and :ref:`installation_verifying` for an end-to-end test.
