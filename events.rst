.. _events:

======
Events
======

Events identify structured security and operational occurrences. For events
emitted by |WPf2b| 6.3, individual pages state the message, facility, level,
Premium action, and shipped fail2ban filter where they apply. The reference
also identifies public event names that 6.3 defines but does not emit.

Core Premium actions use the documented ``WPF2B_EVENT_*`` names. Plugin event
action names are opaque: show the **Event Name** column on the Premium
**Plugins** tab (it is hidden by default) and copy the exact value shown there.
Do not construct an action name from plugin or message slugs.

.. include:: autogen/events-by-class.rst
   :start-after: Events are listed once, under their primary class.

.. include:: autogen/events-az.rst
