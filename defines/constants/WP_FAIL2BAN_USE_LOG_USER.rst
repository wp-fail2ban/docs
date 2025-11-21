.. _WP_FAIL2BAN_USE_LOG_USER:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_USE_LOG_USER
------------------------

.. rubric:: Use the LOG_USER facility.
.. productionlist::
   WP_FAIL2BAN_USE_LOG_USER: `true` | `false` | `LOG_LOCAL0`..`LOG_LOCAL7`
.. include:: default-false.rst.inc

----

Specifies whether to use the LOG_USER facility instead of mapping to LOG_AUTHPRIV. Prior to v6.0.0, this was effectively always ``true``.

.. code-block:: php
   :caption: Example: Use LOG_USER

   /**
    * Use LOG_USER instead of LOG_AUTHPRIV
    */
   define('WP_FAIL2BAN_USE_LOG_USER', true);

You can also map this to a different facility:

.. code-block:: php
   :caption: Example: Use LOG_LOCAL5

   /**
    * Use LOG_LOCAL5 instead of LOG_USER
    */
   define('WP_FAIL2BAN_USE_LOG_USER', LOG_LOCAL5);

.. note::
   This only affects the default facility - it does not override facilities specified by other constants.

.. seealso::
   * :ref:`WP_FAIL2BAN_USE_LOG_AUTH`
   * :ref:`syslog_logfiles`

.. rubric:: History
.. versionadded:: 6.0.0