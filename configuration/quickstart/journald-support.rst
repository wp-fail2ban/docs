.. _quickstart_journald_support:

Journald support
================

**Edition:** Free. Experimental.

The card may disable itself when journald is not detected. When it is available, enabling the card opts into the journald-friendly syslog layout: hostname in the message body (:ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST`) rather than in the syslog identifier.

That is a logging-shape change, not a jail. You still need fail2ban to read the journal; those recipes are in Life With WPf2b. This page only records what the plugin will emit.

If the card is greyed out, |WPf2b| did not detect journald. You can still set :ref:`WP_FAIL2BAN_USING_JOURNALD` yourself.

In 6.3 the matching toggles are syslog workarounds in Advanced settings.

.. include:: ../../autogen/join/card-journald-support.rst

.. seealso::
   :ref:`operating_syslog`
   :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST`
