.. _WP_FAIL2BAN_PLUGIN_SPAM_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_SPAM_LOG
---------------------------

.. rubric:: Facility for "Spam" class plugin events.
.. include:: default-log_auth.rst

----

Specifies the syslog facility to use when logging spam-related events from plugins.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

   /**
    * Facility for Spam class plugin events.
    */
   define('WP_FAIL2BAN_PLUGIN_SPAM_LOG', LOG_LOCAL5);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_SPAM`
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   * :ref:`facilities`

.. rubric:: History
.. versionchanged:: 4.4.0
   Uses :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
.. versionadded:: 4.2.0