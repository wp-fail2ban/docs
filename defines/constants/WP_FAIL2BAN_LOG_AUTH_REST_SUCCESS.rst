.. _WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS
---------------------------------

.. rubric:: Log successful REST API authentications.
.. include:: default-disabled.rst.inc

----

Controls whether successful REST API authentications are written to the syslog facility specified by :ref:`WP_FAIL2BAN_AUTH_LOG`. The message is ``REST authentication success for …`` at Info level. It matches :ref:`filters-wordpress-good`. Recording it does not cause a ban.

Disabled by default because REST clients commonly authenticate on every request, which can produce large numbers of success records.

This control does not affect form-login or XML-RPC success logging.

.. code-block:: php
   :caption: Example: Enable REST successful authentication logging

   /**
    * Log successful REST API authentications.
    */
   define('WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS', true);

.. seealso::
   * :ref:`feature-login-logging`
   * :ref:`WP_FAIL2BAN_AUTH_LOG`
   * :ref:`WP_FAIL2BAN_LOG_AUTH_SUCCESS`
   * :ref:`WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS`

.. rubric:: History
.. versionadded:: 6.3.0
