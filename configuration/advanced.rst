.. _configuration_advanced:

Advanced settings
=================

Advanced settings shows the individual controls behind WP fail2ban's features. Enable **Use advanced settings** on the QuickStart screen to open it. You may use QuickStart as your main interface, move between the two, or leave Advanced settings open as your normal interface. Merely switching interfaces does not apply or reset any setting.

In Free, the Advanced settings page is read-only. Selected QuickStart cards continue to manage the settings in their bundles; constants are the only way to change an individual Free setting and always take priority over a card.

In Premium, saving an eligible Advanced setting makes that edit the latest UI change. It takes effect even if a selected QuickStart card previously set that control as part of its bundle, and the card can remain selected although its full bundle is no longer active. Merely returning to QuickStart does not undo the edit; changing a card's state or explicitly saving QuickStart becomes the latest UI change. Constants still take priority over both interfaces and can prevent a card from applying its bundle. See :ref:`configuration_quickstart` for how cards apply settings and restore previous values.

The tabs are Block, Logging, Remote IPs, Comments, Syslog, and, in Premium where available, Honeypot and WAF. Each control corresponds to a :ref:`defines` constant; :ref:`features` explains how related controls work together.

:ref:`WP_FAIL2BAN_UI_ADVANCED_SETTINGS` fixes which interface is shown and hides the toggle. It does not itself apply, reset, or change feature settings.
