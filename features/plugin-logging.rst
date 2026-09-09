.. _feature-plugin-logging:

Plugin logging
==============

Facilities used when a third-party plugin logs through the Developer API. Each event class has its own facility constant (``WP_FAIL2BAN_PLUGIN_*_LOG``). They default to auth or user as listed on the constant pages.

The old ``WP_FAIL2BAN_PLUGIN_LOG_*`` names were removed in 6.0; Site Health still warns if they are defined.

.. include:: ../autogen/join/feature-plugin-logging.rst
   :end-before: Source
