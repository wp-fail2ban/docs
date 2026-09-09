.. _configuration_quickstart:

QuickStart
==========

QuickStart applies predefined configurations for common security goals. Each card describes the settings it changes and the resulting logging or blocking behaviour.

Constants in ``wp-config.php`` take precedence. A card whose requested value conflicts with a defined constant cannot apply that part of its configuration; Site Health reports the conflict. Enable **Use advanced settings** when you need to configure individual controls instead.

.. toctree::
   :maxdepth: 1

   quickstart/brute-force-protection
   quickstart/advanced-username-protection
   quickstart/spam-protection
   quickstart/journald-support
   quickstart/honeypot
   quickstart/cloudflare-integration
   quickstart/web-application-firewall
