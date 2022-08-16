.. _WP_FAIL2BAN_PLUGIN_AUTH_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_AUTH_LOG
---------------------------

.. rubric:: Facility for "Auth" class plugin events.
.. include:: default-log_auth.rst

.. versionadded:: 4.2.0
.. versionchanged:: 4.4.0
   Uses :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

   /**
    * Facility for "Auth" class plugin events.
    */
   define('WP_FAIL2BAN_PLUGIN_AUTH_LOG', LOG_LOCAL5);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_AUTH`
   * :ref:`facilities`
