.. _developers_events:

Event actions
=============

.. versionadded:: 5.0.0

On Premium, a reached core event dispatches::

   do_action('WPF2B_EVENT_'.$name, $event_data);

``$name`` is the documented core event name (``AUTH_FAIL``,
``PASSWORD_REQUEST_OK``, …). The action reports the occurrence. It is not a
persistence notification: the main event row or its separate detail may still
fail to be stored.

For a registered plugin message, show the **Event Name** column on the Premium
**Plugins** tab (hidden by default) and use the exact action identifier shown.
Pass that value unchanged as the first argument to ``add_action()``. The
identifier is opaque and must not be predicted from registration values.

``$event_data`` is :ref:`developers_events_event-data`.

Listen with ``add_action('WPF2B_EVENT_AUTH_FAIL', 'my_handler')``. Core/Free
also logs the event to syslog. See :ref:`operating_event_storage` for the
persistence boundary.

.. code-block:: php

   add_action('WPF2B_EVENT_AUTH_FAIL', function (\WP_fail2ban\Plugin\premium\lib\EventData $e): void {
       error_log('fail for '.$e->getUsername().' from '.$e->getIp());
   });
