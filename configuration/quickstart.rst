.. _configuration_quickstart:

QuickStart
==========

QuickStart provides cards for common security goals. Each card applies several compatible settings together; its page says which settings change, what the resulting protection or logging does, and which important cases remain outside it. QuickStart can remain the main settings interface, or you can move between it and Advanced settings. Merely switching interfaces does not apply or reset any setting.

In Premium, the most recently applied UI change wins. Changing an individual setting in Advanced settings takes effect even if a selected card previously set it, so the card can remain selected while its bundle no longer describes all the effective settings. Changing a card's state then becomes the latest UI change: selecting it applies the bundle, while deselecting it restores the prior values that card owns. Explicitly saving QuickStart reasserts selected cards. QuickStart owns only settings it changed; compatible values that were already present remain independent, and a complete bundle configured independently can appear as started and locked.

In Free, Advanced settings is a read-only display of the individual controls. Selected QuickStart cards continue to supply their values, and individual Free values can be changed only through constants.

Constants take priority over both interfaces in either edition. Changing a constant can override an Advanced setting and can prevent an enabled QuickStart card from applying its bundle. When any fixed value conflicts with a card, QuickStart applies none of that card's changes, and Site Health can report the conflict. An already compatible constant may satisfy a card without being changed; some cards therefore accept a stronger value than the value they would otherwise set.

.. toctree::
   :maxdepth: 1

   quickstart/brute-force-protection
   quickstart/advanced-username-protection
   quickstart/spam-protection
   quickstart/journald-support
   quickstart/honeypot
   quickstart/cloudflare-integration
   quickstart/web-application-firewall

Examples
--------

These examples use **Advanced username protection**, which requires both
user-enumeration protection and email-only login to be on. The tables show the
effective values after each action.

Latest Premium UI change
^^^^^^^^^^^^^^^^^^^^^^^^

Start with both settings off, then apply the card and edit email-only login in
Advanced settings:

.. list-table::
   :header-rows: 1
   :widths: 54 23 23

   * - Action
     - User-enumeration protection
     - Email-only login
   * - Initial values
     - Off
     - Off
   * - Select the card
     - On
     - On
   * - Save email-only login as off in Advanced settings
     - On
     - Off
   * - Open QuickStart without saving it
     - On
     - Off
   * - Save QuickStart with the card selected
     - On
     - On

The Advanced edit takes effect because it is the later UI change. Opening
QuickStart does nothing by itself; saving it reasserts the selected card.

Values the card owns
^^^^^^^^^^^^^^^^^^^^

Now start with user-enumeration protection already on and email-only login off:

.. list-table::
   :header-rows: 1
   :widths: 54 23 23

   * - Action
     - User-enumeration protection
     - Email-only login
   * - Initial values
     - On
     - Off
   * - Select the card
     - On
     - On
   * - Deselect the card
     - On
     - Off

The card leaves the compatible user-enumeration value independent. It owns the
change to email-only login, so deselecting the card restores only that setting.

Compatible and conflicting constants
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

With both saved UI values off, define
:ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION` as ``true``:

.. list-table::
   :header-rows: 1
   :widths: 54 23 23

   * - Action
     - User-enumeration protection
     - Email-only login
   * - Before selecting the card
     - On
     - Off
   * - Select the card
     - On
     - On
   * - Deselect the card
     - On
     - Off

The constant satisfies one requirement without being changed or owned by the
card. The card changes and later restores only email-only login.

If the same constant is ``false``, it conflicts with the card:

.. list-table::
   :header-rows: 1
   :widths: 54 23 23

   * - Action
     - User-enumeration protection
     - Email-only login
   * - Before applying the card
     - Off
     - Off
   * - Attempt to apply the card
     - Off
     - Off
   * - Remove the constant
     - Off
     - Off
   * - Apply the card
     - On
     - On

The conflict prevents the whole bundle from being applied, and Site Health can
report it. Removing the constant exposes the unchanged saved values; it does
not apply the card automatically.
