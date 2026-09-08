==================
WP fail2ban 6.3
==================

`WP fail2ban <https://wp-fail2ban.com/>`_ writes WordPress events to syslog so `fail2ban <https://www.fail2ban.org/>`_ can ban the addresses that produce them.

This manual documents **WP fail2ban 6.3 as shipped**. It freezes with the release. How to wire jails, journald, Cloudflare, and this year’s OS or panel belongs in Life With WPf2b, which tracks the changing environment around the plugin.

Start with :ref:`configuration_quickstart` if you want the simple UI. Use :ref:`features` when you need the artefacts a setting actually produces.

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
