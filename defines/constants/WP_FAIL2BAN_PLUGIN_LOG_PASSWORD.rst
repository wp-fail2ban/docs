.. _WP_FAIL2BAN_PLUGIN_LOG_PASSWORD:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_PASSWORD
-------------------------------

.. rubric:: Enable logging plugin :ref:`"Password" class <events_PASSWORD>` events.
.. include:: default-disabled.rst

----

Enables logging of password-related events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin password logging

   /**
    * Enable logging plugin "Password" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_PASSWORD', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_PASSWORD_LOG`

.. rubric:: History
.. versionadded:: 4.2.0