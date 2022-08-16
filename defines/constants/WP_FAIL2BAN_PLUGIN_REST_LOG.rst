.. _WP_FAIL2BAN_PLUGIN_REST_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_REST_LOG
---------------------------

.. rubric:: Facility for "REST" class plugin events.
.. include:: default-log_user.rst

.. versionadded:: 4.2.0

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for "REST" class plugin events.
    */
   define('WP_FAIL2BAN_PLUGIN_REST_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_REST`
   * :ref:`facilities`
