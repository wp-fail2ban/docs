.. _feature-honeypot:

Honeypot
========

Premium, experimental. Automated scanners often request predictable paths that have no legitimate purpose on a site. The honeypot turns requests for selected trap paths into hard evidence, giving a fail2ban jail a strong signal on which to act. If a configured trap also serves legitimate content, ordinary visitors requesting it generate the same hard evidence and can be banned by a jail that acts on those messages. The trap path list can be customised.

:ref:`WP_FAIL2BAN_EX_HONEYPOT` enables the feature as a whole. :ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT` activates the built-in trap-path matcher and asks WordPress to publish the same paths as ``Disallow`` entries. Both controls must be enabled for those paths to produce evidence. WordPress publishes the entries only on a site marked public; on a non-public site, the matcher remains active without published bait lines. The :ref:`quickstart_honeypot` card enables both controls. Individual controls are on the Premium Honeypot tab in Advanced settings.

.. include:: ../autogen/join/feature-honeypot.rst
   :end-before: Source
