.. _WP_FAIL2BAN_PLUGIN_LOG_HONEYPOT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_HONEYPOT
-------------------------------

.. rubric:: Enable logging plugin :ref:`"Honeypot" class <events_HONEYPOT>` events.
.. include:: default-disabled.rst

----

Enables logging of Honeypot events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin Honeypot logging

   /**
    * Enable logging plugin "Honeypot" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_HONEYPOT', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_HONEYPOT_LOG`

.. rubric:: History
.. versionadded:: 6.0.0