.. _WP_FAIL2BAN_USE_AUTHPRIV:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_USE_AUTHPRIV
------------------------

.. rubric:: Use LOG_AUTHPRIV instead of LOG_AUTH.
.. include:: default-disabled.rst

.. versionadded:: 4.4.0

----

Specifies whether to use LOG_AUTHPRIV instead of LOG_AUTH as the default syslog facility for authentication events. Some systems use LOG_AUTHPRIV by default, but this cannot be reliably detected at runtime.

.. code-block:: php
   :caption: Example: Use LOG_AUTHPRIV

   /**
    * Use LOG_AUTHPRIV instead of LOG_AUTH
    */
   define('WP_FAIL2BAN_USE_AUTHPRIV', true);

.. note::
   This only affects the default facility - it does not override facilities specified by other constants.

.. include:: must-use-wp-config.rst

.. seealso::
   * :ref:`WP_FAIL2BAN_AUTH_LOG`
   * :ref:`syslog_logfiles`

