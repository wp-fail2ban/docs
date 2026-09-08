.. _events:

======
Events
======

One page per event. Labels are ``_WPF2B_EVENT_*``. Each event is listed **once**, under its primary class (WAF, then Block, Auth, Comment, XML-RPC, Password, REST, Spam, Honeypot, Other). REST authentication therefore appears under Auth when ``AUTH`` is the first matching class.

Premium listeners use the same name: ``do_action('WPF2B_EVENT_'.$name, EventData)``. Third-party messages use ``WPF2B_PLUGIN_EVENT_*``.

``ACTIVATED`` / ``DEACTIVATED`` are meta values, not user-facing events.

.. include:: autogen/events-by-class.rst

.. include:: autogen/events-az.rst
