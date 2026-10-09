.. _feature-misc:

Installation and administration
===============================

These settings adapt |WPf2b| to a Composer-managed installation and tailor what
administrators see in the WordPress Dashboard. Unlike the security features
elsewhere in this section, they do not change which requests are logged or
blocked.

Composer-managed sites are normally detected automatically. If
``composer.json`` is elsewhere, :ref:`WP_FAIL2BAN_USING_COMPOSER` can identify
it; the setting can also explicitly enable Composer mode.

The other controls tailor WordPress administration: they can suppress Premium
prompts in Free, hide the Dashboard news widget and prevent its news fetch, and
choose whether the settings screen opens on QuickStart or Advanced. Choosing
the displayed page changes only the interface and can hide the UI toggle; it
does not apply, reset, enable, or disable any feature. Advanced remains
read-only in Free. For how those pages change configuration and how constants
take precedence, see :ref:`configuration_quickstart` and
:ref:`configuration_advanced`.

.. include:: ../autogen/join/feature-misc.rst
   :end-before: Source
