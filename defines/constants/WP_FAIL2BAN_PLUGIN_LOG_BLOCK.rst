.. _WP_FAIL2BAN_PLUGIN_LOG_BLOCK:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_BLOCK
----------------------------

.. rubric:: Enable logging plugin :ref:`"Block" class <events_BLOCK>` events.
.. include:: default-disabled.rst

.. versionadded:: 4.4.0

----

Enables logging of block events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin block logging

   /**
    * Enable logging plugin "Block" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_BLOCK', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_BLOCK`
