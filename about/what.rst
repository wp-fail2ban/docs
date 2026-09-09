.. _about_what:

What WP fail2ban does
=====================

WordPress does not speak fail2ban. |WPf2b| sits in the request, decides which events matter, and writes them to syslog with stable message text. Shipped filter files in ``filters.d`` teach fail2ban how to read those lines. fail2ban, not WordPress, updates the firewall.

|WPf2b| supplies the matching filters; you configure the jails, log source, and ban action.

What you get with a working install:

* Login success and failure (including REST and XML-RPC) on the auth facility
* Optional blocks for user enumeration, username logins, and named usernames
* Comment, pingback, trackback, and spam logging
* Premium: country blocking, honeypot, WAF, Cloudflare/Jetpack IP lists, and an on-site event store
