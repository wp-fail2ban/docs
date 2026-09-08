.. _developers_events:

Event actions
=============

.. versionadded:: 5.0.0

On Premium, after an event is stored, |WPf2b| runs::

   do_action('WPF2B_EVENT_'.$name, $event_data);

``$name`` is the event constant name (``AUTH_FAIL``, ``PASSWORD_REQUEST_OK``, …). Third-party messages use ``WPF2B_PLUGIN_EVENT_`` plus the registered message name.

``$event_data`` is :ref:`developers_events_event-data`.

Listen with ``add_action('WPF2B_EVENT_AUTH_FAIL', 'my_handler')``. Core/Free still writes syslog without this hook.

.. code-block:: php

   add_action('WPF2B_EVENT_AUTH_FAIL', function (\WP_fail2ban\Plugin\premium\lib\EventData $e): void {
       error_log('fail for '.$e->getUsername().' from '.$e->getIp());
   });
