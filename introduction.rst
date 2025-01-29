.. _introduction:

============
Introduction
============

.. _history:

History
-------

As with many Open Source projects, `WP fail2ban` started as a way to scratch a particular itch. I had a dedicated server that was getting some unwelcome attention from various bots, and while it was trivial to configure `fail2ban` for ``ssh`` etc, WordPress was another story. Thus `WP fail2ban` was born late November 2011.

Since then, it has evolved into a robust security solution with a significant user base. What started as a simple tool has grown into a comprehensive security plugin available in multiple flavours to meet different needs.

.. _present:

Current Status
--------------

As of version 5.4, `WP fail2ban` has undergone significant changes to adapt to the evolving WordPress ecosystem. The plugin is now available in three flavours:

1. **Canonical Flavour** (GitHub)
   
   - The primary open-source version
   - Includes additional security features not permitted in WordPress.org
   - Supports composer installation
   - Features signed releases and SBOM
   - Includes built-in updater for GitHub releases

2. **WordPress.org Flavour** (LTS)
   
   - Long-Term Support version
   - Core security features
   - Focuses on stability and WordPress compatibility
   - Targets broader compatibility (PHP 7.4+)

3. **Premium Flavour**
   
   - All features from the Canonical flavour
   - Advanced security features including WAF and Honeypot
   - Premium support

.. _future:

Future Direction
----------------

The project continues to evolve with security as its primary focus. The separation between core functionality and premium features ensures that users of all versions receive reliable protection, while allowing for advanced features in the premium offering.

The multi-release strategy allows the project to serve different user needs - from those requiring WordPress.org compatibility to those seeking the most advanced security features.

.. note::
   For enhanced security features and signed releases, users are encouraged to choose either the Canonical flavour from GitHub or the Premium flavour.

