.. _features:

========
Features
========

WP fail2ban records WordPress activity so operators can recognise repeated abuse, directly rejects selected requests, and supplies fail2ban filters for the messages it emits. These are separate outcomes: a logged event does not itself mean that fail2ban has banned an address. The Feature pages explain each capability, its boundaries, and the controls that affect it.

.. toctree::
   :maxdepth: 2

   features/authentication
   features/user-enumeration
   features/comments
   features/xmlrpc
   features/spam
   features/country-blocking
   features/honeypot
   features/waf
   features/remote-ips
   features/plugin-logging
   features/event-store
   features/site-health
   features/syslog
   features/misc
