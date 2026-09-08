.. _configuration_advanced:

Advanced settings
=================

Advanced settings is the 6.3 full UI: enable flags, facilities, proxy lists, WAF, honeypot, country codes. It is not a second product. Every control maps to a :ref:`defines` constant and therefore to a :ref:`features` page.

How to use it from this manual:

1. Find the **feature** you care about (function-shaped: XML-RPC, spam, remote IPs, …).
2. Read what enabling it does, then follow the constant and event links.
3. The sentence “on the Block / Logging / Remote IPs tab” on a card or feature page is a 6.3 wayfinding footnote. 6.4 may move the control; the constant name will not.

:ref:`WP_FAIL2BAN_UI_ADVANCED_SETTINGS` can hide the Advanced toggle entirely (typical for MU-plugin deployments). If the constant is defined, the UI switch disappears.

Do not look for a chapter per tab. There isn’t one.
