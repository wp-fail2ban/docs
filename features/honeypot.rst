.. _feature-honeypot:

Honeypot
========

The Premium honeypot uses selected paths with no legitimate purpose on the site as traps for automated scanners. A request for a trap path produces a hard-failure message that a fail2ban jail can match. The trap list can be customised, but a path that also serves real content produces the same message for ordinary visitors and can lead the jail to ban them.

:ref:`WP_FAIL2BAN_EX_HONEYPOT` enables honeypot processing. :ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT` activates the built-in trap-path matcher and asks WordPress to publish the same paths as ``Disallow`` entries. Both controls must be enabled for requests to those paths to be logged. WordPress publishes the entries only on a site marked public; on a non-public site, the matcher remains active without published bait lines. The :ref:`quickstart_honeypot` card enables both controls. Individual controls are on the Premium Honeypot tab in Advanced settings.

The Honeypot is experimental in 6.3.

.. include:: ../autogen/join/feature-honeypot.rst
   :end-before: Source
