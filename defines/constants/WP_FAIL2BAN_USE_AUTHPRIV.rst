.. _WP_FAIL2BAN_USE_AUTHPRIV:

WP_FAIL2BAN_USE_AUTHPRIV
------------------------

.. versionadded:: 4.4.0

By default, *WPf2b* uses **LOG_AUTH** for logging various events. However, some systems use **LOG_AUTHPRIV** instead, but there's no good run-time way to tell. If your system uses **LOG_AUTHPRIV** you should add the following to ``wp-config.php``:

.. code-block:: php

   define('WP_FAIL2BAN_USE_AUTHPRIV', true);

.. note::

   This only changes the **default** use of **LOG_AUTH** - it doesn't override individual settings.

.. seealso::
   * :ref:`syslog_logfiles`

