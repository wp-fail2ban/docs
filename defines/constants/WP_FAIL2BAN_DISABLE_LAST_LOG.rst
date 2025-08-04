.. _WP_FAIL2BAN_DISABLE_LAST_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_DISABLE_LAST_LOG
----------------------------

.. rubric:: Disable logging of last events.
.. include:: default-false.rst

----

By default, WPf2b stores the last 5 syslog messages in the options table for display in the dashboard widget. This can be disabled if you have performance concerns about frequent options table updates.

.. code-block:: php
   :caption: Example: Disable last events logging

   /**
    * Disable logging of last events
    */
   define('WP_FAIL2BAN_DISABLE_LAST_LOG', true);

.. note::
   This only affects the dashboard widget display. All events will still be sent to syslog.

.. rubric:: History
.. versionadded:: 4.3.0