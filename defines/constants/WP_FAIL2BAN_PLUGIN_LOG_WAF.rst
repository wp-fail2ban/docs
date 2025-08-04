.. _WP_FAIL2BAN_PLUGIN_LOG_WAF:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_WAF
--------------------------

.. rubric:: Enable logging plugin :ref:`"WAF" class <events_WAF>` events.
.. include:: default-disabled.rst

----

Enables logging of WAF events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin WAF logging

   /**
    * Enable logging plugin "WAF" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_WAF', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_WAF_LOG`

.. rubric:: History
.. versionadded:: 5.1.0