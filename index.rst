==================
WP fail2ban 6.3
==================

`WP fail2ban <https://wp-fail2ban.com/>`_ writes WordPress events to syslog so `fail2ban <https://www.fail2ban.org/>`_ can ban the addresses that produce them.

This manual covers WP fail2ban 6.3. Begin with :ref:`installation` to install the plugin and connect it to fail2ban.

Use :ref:`configuration_quickstart` for common configurations, or :ref:`configuration_advanced` to control individual settings. :ref:`features` describes the resulting behaviour and links to the exact constants, events, and filters involved.

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
