.. _WP_FAIL2BAN_PLUGIN_WAF_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_WAF_LOG
---------------------------

.. rubric:: Facility for "WAF" class plugin events.
.. include:: default-log_auth.rst.inc
.. include:: premium-only.rst.inc

----

Specifies the syslog facility to use when logging WAF events from plugins.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for "WAF" class plugin events.
    */
   define('WP_FAIL2BAN_PLUGIN_WAF_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_LOG_WAF`

.. rubric:: History
.. versionchanged:: 6.0.0
   Changed default facility to :ref:`LOG_AUTH <facilities>`.
.. versionadded:: 5.1.0