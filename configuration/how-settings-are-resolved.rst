.. _configuration_how_settings_are_resolved:

How settings are resolved
=========================

If an operator sets the same control in more than one supported place, |WPf2b| uses the first available value in this order:

1. A defined PHP constant, normally in ``wp-config.php``.
2. A selected QuickStart card in Free, or a saved Premium setting managed through QuickStart or Advanced settings.
3. The built-in default.

Define a constant when the host or deployment needs to hold an individual choice outside the Settings UI. In Premium, that constant overrides the saved value only for that control; the other saved settings remain in effect. A conflicting constant prevents QuickStart from applying the card's bundle. To return the choice to the Settings UI, remove the constant. A selected Free card can then supply its value; in Premium, review the saved value that is no longer overridden.

Place ``define()`` calls in ``wp-config.php`` before WordPress loads, above the ``/* That's all, stop editing! Happy blogging. */`` line. See :ref:`configuration__mu-plugins` for the separate question of load order.
