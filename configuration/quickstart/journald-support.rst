.. _quickstart_journald_support:

Journald support
================

**Edition:** Free. Experimental.

Selecting the card sets :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST` to ``true``. The site name is then written in the message body instead of being appended to the syslog identifier, leaving the identifier as ``wordpress`` for the filters' journal match.

The card does not configure fail2ban. Enable the systemd backend in the WordPress jails as shown in :ref:`configuration__fail2ban`.

The card is disabled when systemd or journald is unavailable, or when journald support is disabled in configuration. If journald is present but not detected, :ref:`WP_FAIL2BAN_USING_JOURNALD` can override detection.

If :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST` is fixed to a conflicting value in ``wp-config.php``, the card cannot apply it and Site Health reports the conflict. The equivalent individual controls are on the Syslog tab in Advanced settings.

.. include:: ../../autogen/join/card-journald-support.rst

.. seealso::
   :ref:`operating_syslog`
   :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST`
