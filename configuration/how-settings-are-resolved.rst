.. _configuration_how_settings_are_resolved:

How settings are resolved
=========================

If an operator sets the same control in more than one supported place, |WPf2b| uses the first available value in this order:

1. A defined PHP constant, normally in ``wp-config.php``.
2. A saved Premium setting, including one managed through QuickStart or Advanced settings.
3. The built-in default.

Define a constant when the host or deployment needs to hold an individual choice outside the Settings UI. That constant overrides the saved value for that control; it does not disable the rest of Premium's saved settings. QuickStart may report that it cannot apply a card's required change when a constant already fixes the conflicting value. To let the saved setting control that choice again, remove the constant and review the value that remains in the Settings UI.

Place ``define()`` calls in ``wp-config.php`` before WordPress loads, above the ``/* That's all, stop editing! Happy blogging. */`` line. See :ref:`configuration__mu-plugins` for the separate question of load order.
