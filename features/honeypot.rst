.. _feature-honeypot:

Honeypot
========

The Premium honeypot uses selected paths with no legitimate purpose on the site as traps for automated scanners. A WordPress request that would otherwise return 404 produces a hard-failure message when its path matches a trap, allowing a fail2ban jail to act on repeated probes. A path that WordPress resolves to real content is not treated as a trap.

:ref:`WP_FAIL2BAN_EX_HONEYPOT` enables honeypot processing. :ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT` activates the built-in trap-path matcher and asks WordPress to publish the same paths as ``Disallow`` entries. Both controls must be enabled for requests to those paths to be logged. WordPress publishes the entries only on a site marked public; on a non-public site, the matcher remains active without published bait lines. The :ref:`quickstart_honeypot` card enables both controls. Individual controls are on the Premium Honeypot tab in Advanced settings. The Robots.txt section of that tab lists the paths currently in use.

The trap list has two kinds of path. A small fixed set of obvious bait paths is always present. A few further paths follow the site's permalink structure so they look like ordinary content URLs. Those generated paths are chosen only while nothing is published at that location. If content later appears at a generated path, Site Health removes it from the trap list and warns. The remaining traps continue to work; the set is simply shorter. Flushing permalinks selects replacements. |WPf2b| does not flush permalinks itself, because rebuilding rewrite rules on a live site with a large or frequently changing permalink structure is expensive.

Site Health also warns when a fixed bait path is already occupied. Those paths are deliberate bait, so an occupant needs a good reason, such as another honeypot. :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_HONEYPOT` suppresses that warning. It does not suppress the warning that the generated set is short.

The Honeypot is experimental in 6.3.

.. include:: ../autogen/join/feature-honeypot.rst
   :end-before: Source
