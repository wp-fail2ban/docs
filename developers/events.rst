.. _developers_events:

Event actions
=============

.. versionadded:: 5.0.0

Event actions let integration code respond when Premium creates an event. For
a core event, Premium calls::

   do_action('WPF2B_EVENT_'.$name, $event_data);

``$name`` is the documented core event name (``AUTH_FAIL``,
``PASSWORD_REQUEST_OK``, …), and ``$event_data`` is
:ref:`developers_events_event-data`.

The action is deliberately independent of the event-history database. Premium
first attempts the applicable database writes, then runs the action whether or
not they succeeded. A listener can therefore inspect the event or perform its
own work even when the main event row or its detail could not be stored.
Receiving the action means that |WPf2b| created the event, not that event
history contains it. See :ref:`operating_event_storage` for the storage model.

For a registered plugin message, show the **Event Name** column on the Premium
**Plugins** tab (hidden by default) and use the exact action identifier shown.
Pass that value unchanged as the first argument to ``add_action()``. The
identifier is opaque and must not be predicted from registration values.

Listen with ``add_action('WPF2B_EVENT_AUTH_FAIL', 'my_handler')``. The
corresponding core message is also written to syslog.

.. code-block:: php

   add_action('WPF2B_EVENT_AUTH_FAIL', function (\WP_fail2ban\Plugin\premium\lib\EventData $e): void {
       error_log('fail for '.$e->getUsername().' from '.$e->getIp());
   });
