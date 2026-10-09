===============
WP fail2ban 6.3
===============

`WP fail2ban <https://wp-fail2ban.com/>`_ connects activity inside WordPress to fail2ban and the host firewall, so attacks seen by WordPress can be acted on at the server. It also provides protections inside WordPress and, in Premium, structured event history for investigation and reporting.

This is the manual for WP fail2ban 6.3. If you are new to WP fail2ban, :ref:`about` explains what it does and how the pieces fit together. To get a site running, start with :ref:`installation`.

For common security goals, :ref:`configuration_quickstart` applies groups of related settings together. :ref:`configuration_advanced` exposes the individual controls when you need more detail. :ref:`features` explains the protections and behaviour those settings provide, with links to the exact constants, events, and filters where appropriate.

.. toctree::
   :caption: Manual
   :maxdepth: 2

   about
   installation
   configuration
   operating
   extending

.. toctree::
   :caption: Reference
   :maxdepth: 2

   release
   features
   defines
   events
   filters
   facilities
   developers
