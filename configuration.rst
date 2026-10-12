.. _configuration:

=============
Configuration
=============

Configure the WordPress features with QuickStart bundles or, where available, individual Advanced settings. A straightforward installation can keep the default logging choices and configure a fail2ban jail to read the host log that receives those messages. Change a setting when you need different protection, log routing, or host integration; check that a host-side change stays aligned with the WordPress choice.

Constants in ``wp-config.php`` take precedence over saved Premium settings. See :ref:`configuration_how_settings_are_resolved` when a control appears not to take effect. :ref:`operating_logging` explains where messages go before you choose facilities or log sources.

.. toctree::
   :maxdepth: 2

   configuration/quickstart
   configuration/advanced
   configuration/how-settings-are-resolved
   configuration/fail2ban
   configuration/site-health-tool
