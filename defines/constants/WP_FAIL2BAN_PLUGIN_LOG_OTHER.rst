.. _WP_FAIL2BAN_PLUGIN_LOG_OTHER:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_OTHER
----------------------------

.. rubric:: Enable logging plugin :ref:`"Other" class <events_OTHER>` events.
.. include:: default-disabled.rst

.. versionadded:: 4.4.0

----

Enables logging of miscellaneous events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin other logging

   /**
    * Enable logging plugin "Other" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_OTHER', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_OTHER_LOG`
