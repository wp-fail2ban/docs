.. _about_how_it_works:

How WP fail2ban works
=====================

|WPf2b| recognises selected activity while WordPress handles a request, such as a failed login or a blocked attempt to discover a username. It writes a human-readable message to syslog. The host's logging service places the message in a log file or the systemd journal, where an administrator can read it and fail2ban can use it.

The shipped fail2ban filters recognise particular message forms. A jail combines a filter with the log source it reads, a counting policy, and a ban action. When the jail's conditions are met, fail2ban runs that action, normally changing the host firewall. This is how WordPress activity can lead to an address being banned without giving WordPress control of the firewall.

Some protections also reject the current request inside WordPress. That immediate response is additional to the log, jail, and firewall path: a logged failure alone does not reject a request or ban an address. Premium also keeps structured events for the Dashboard, reports, and investigation. The database history is a separate view of activity; fail2ban reads the host log or journal, not that history.

To make the path work, route |WPf2b| messages to the source the jail reads, install the shipped filters on the host, and configure the jail and its action. See :ref:`operating_logging` for the logging model, :ref:`configuration__fail2ban` for host integration, and :ref:`installation_verifying` to check the complete path.
