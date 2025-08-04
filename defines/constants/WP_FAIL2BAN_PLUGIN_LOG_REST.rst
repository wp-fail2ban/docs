.. _WP_FAIL2BAN_PLUGIN_LOG_REST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_REST
---------------------------

.. rubric:: Enable logging plugin :ref:`"REST" class <events_REST>` events.
.. include:: default-disabled.rst

----

Enables logging of REST API events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin REST logging

   /**
    * Enable logging plugin "REST" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_REST', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_REST_LOG`

.. rubric:: History
.. versionadded:: 4.2.0