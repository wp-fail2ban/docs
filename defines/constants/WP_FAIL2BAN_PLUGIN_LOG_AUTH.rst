.. _WP_FAIL2BAN_PLUGIN_LOG_AUTH:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_AUTH
---------------------------

.. rubric:: Enable logging plugin :ref:`"Auth" class <events_AUTH>` events.
.. include:: default-disabled.rst

----

Enables logging of authentication events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin auth logging

   /**
    * Enable logging plugin "Auth" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_AUTH', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_AUTH_LOG`
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionadded:: 4.2.0