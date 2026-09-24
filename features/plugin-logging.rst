.. _feature-plugin-logging:

Plugin logging
==============

Facilities used when a third-party plugin logs through the Developer API. Each event class has its own facility constant (``WP_FAIL2BAN_PLUGIN_*_LOG``). They default to auth or user as listed on the constant pages.

Registration describes the message and gives |WPf2b| the metadata needed for
its logging and Premium event infrastructure. The integration supplies its own
fail2ban filter and correct runtime substitutions. |WPf2b| does not turn the
registered ``fail`` or variable-regex metadata into a fail2ban rule or validate
substitution values against those regexes at log time.

The old ``WP_FAIL2BAN_PLUGIN_LOG_*`` names were removed in 6.0; Site Health still warns if they are defined.

.. include:: ../autogen/join/feature-plugin-logging.rst
   :end-before: Source
