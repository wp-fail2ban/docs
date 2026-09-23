.. _configuration_quickstart:

QuickStart
==========

QuickStart provides cards for common security goals. Each card applies a bundle of compatible settings; its page explains the behaviour and boundaries of that bundle. QuickStart can remain the main settings interface, or you can move between it and Advanced settings. Merely switching interfaces does not apply or reset any setting.

In Premium, the most recently applied UI change wins. Changing an individual setting in Advanced settings takes effect even if a selected card previously set it, so the card can remain selected while its bundle no longer describes all the effective settings. Changing a card's state then becomes the latest UI change: selecting it applies the bundle, while deselecting it restores the prior values that card owns. Explicitly saving QuickStart reasserts selected cards. QuickStart owns only settings it changed; compatible values that were already present remain independent, and a complete bundle configured independently can appear as started and locked.

In Free, Advanced settings is a read-only display of the individual controls. Opening it, leaving it open, or switching between the two interfaces does not change behaviour: selected QuickStart cards continue to supply their settings. Individual Free values can be changed only through constants.

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
