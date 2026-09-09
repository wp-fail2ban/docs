.. _events:

======
Events
======

Events identify the activity that produced a log message. Browse them by class or by name to see the message, severity, facility, and matching fail2ban filter.

Premium listeners use the same name: ``do_action('WPF2B_EVENT_'.$name, EventData)``. Third-party messages use ``WPF2B_PLUGIN_EVENT_*``.

.. include:: autogen/events-by-class.rst
   :start-after: Events are listed once, under their primary class.

.. include:: autogen/events-az.rst
