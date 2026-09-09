.. _configuration_how_settings_are_resolved:

How settings are resolved
=========================

Priority, highest first:

1. A ``define()`` in ``wp-config.php`` (or anything loaded before WordPress).
2. Premium: the value stored in site options from the settings UI.
3. The built-in default.

A defined constant **always** wins. QuickStart and Advanced settings will not override it. If a card cannot apply because the constant is already defined, Site Health reports a QuickStart failure.

All ``define()`` lines must appear **before** this comment in ``wp-config.php``::

   /* That's all, stop editing! Happy blogging. */

If they appear after it, PHP warns that the constant is already defined and |WPf2b| never sees your value.

For MU-plugin installs the UI is not the configuration surface; use ``wp-config.php``. See :ref:`configuration__mu-plugins`.
