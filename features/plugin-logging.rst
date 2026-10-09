.. _feature-plugin-logging:

Plugin logging
==============

Third-party plugins can use the Developer API to write their own messages to syslog and, on Premium, raise corresponding events. Each event class has a facility constant in the ``WP_FAIL2BAN_PLUGIN_*_LOG`` family, with its auth- or user-family default listed on the constant page.

Registration describes the message and supplies the metadata |WPf2b| needs.
The integration remains responsible for correct runtime substitutions and for
the fail2ban filter that recognises the result. Registered ``fail`` and
variable-regex metadata neither generate that filter nor validate substitutions
at log time.

The old ``WP_FAIL2BAN_PLUGIN_LOG_*`` names were removed in 6.0; Site Health still warns if they are defined.

.. include:: ../autogen/join/feature-plugin-logging.rst
   :end-before: Source
