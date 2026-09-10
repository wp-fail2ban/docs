.. _WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS
-----------------------------------

.. rubric:: Log successful XML-RPC authentications.
.. include:: default-disabled.rst.inc

----

Controls whether successful XML-RPC authentications are written to the syslog facility specified by :ref:`WP_FAIL2BAN_AUTH_LOG`. The message is ``XML-RPC authentication success for …`` at Info level. It matches :ref:`filters-wordpress-good`. Recording it does not cause a ban.

Disabled by default because XML-RPC clients commonly authenticate on every request, which can produce large numbers of success records.

This control does not affect form-login or REST success logging.

.. code-block:: php
   :caption: Example: Enable XML-RPC successful authentication logging

   /**
    * Log successful XML-RPC authentications.
    */
   define('WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS', true);

.. seealso::
   * :ref:`feature-login-logging`
   * :ref:`WP_FAIL2BAN_AUTH_LOG`
   * :ref:`WP_FAIL2BAN_LOG_AUTH_SUCCESS`
   * :ref:`WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS`

.. rubric:: History
.. versionadded:: 6.3.0
