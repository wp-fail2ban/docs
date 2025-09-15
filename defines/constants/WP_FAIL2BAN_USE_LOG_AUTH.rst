.. _WP_FAIL2BAN_USE_LOG_AUTH:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_USE_LOG_AUTH
------------------------

.. rubric:: Use LOG_AUTH instead of LOG_AUTHPRIV.
.. productionlist::
   WP_FAIL2BAN_USE_LOG_AUTH: `true` | `false` | `LOG_LOCAL0`..`LOG_LOCAL7`
.. include:: default-false.rst

----

Specifies whether to use LOG_AUTH instead of LOG_AUTHPRIV as the default syslog facility for authentication events. Some older and/or more esoteric systems do not understand LOG_AUTHPRIV, but this cannot be reliably detected at runtime. In such cases, you should set this to ``true``.

.. code-block:: php
   :caption: Example: Use LOG_AUTH

   /**
    * Use LOG_AUTH instead of LOG_AUTHPRIV
    */
   define('WP_FAIL2BAN_USE_LOG_AUTH', true);

You can also map this to a different facility:

.. code-block:: php
   :caption: Example: Use LOG_LOCAL5

   /**
    * Use LOG_LOCAL5 instead of LOG_AUTHPRIV
    */
   define('WP_FAIL2BAN_USE_LOG_AUTH', LOG_LOCAL5);

.. note::
   This only affects the default facility - it does not override facilities specified by other constants.

.. include:: must-use-wp-config.rst

.. seealso::
   * :ref:`WP_FAIL2BAN_AUTH_LOG`
   * :ref:`syslog_logfiles`

.. rubric:: History
.. versionadded:: 6.0.0 Introduced to replace :ref:`WP_FAIL2BAN_USE_AUTHPRIV`