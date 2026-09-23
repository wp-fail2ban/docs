.. _quickstart_journald_support:

Journald support
================

**Edition:** Free. Experimental.

Selecting the card enables inline-host syslog formatting: the site name moves into the message body rather than appearing in the syslog identifier. With the normal tag, the resulting identifier is ``wordpress``, matching the shipped filters' journal selection. If the independent short-tag setting is enabled, the identifier is ``wp`` and the jail's journal match must reflect that. See :ref:`configuration__fail2ban`.

The card does not configure fail2ban or change syslog transport. It is disabled when systemd or journald is unavailable or journald support is disabled in configuration. :ref:`WP_FAIL2BAN_USING_JOURNALD` can override detection state.

Selecting the card applies :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST` as ``true``. The Syslog tab shows the individual control; use the constant for an individual change in Free.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-journald-support.rst

.. seealso::
   :ref:`operating_syslog`
   :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST`
