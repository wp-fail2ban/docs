.. _WP_FAIL2BAN_LOG_AUTH_SUCCESS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_AUTH_SUCCESS
----------------------------

.. rubric:: Log successful logins.
.. include:: default-true.rst.inc

----

Controls whether successful form logins are written to the syslog facility specified by :ref:`WP_FAIL2BAN_AUTH_LOG`. The message is ``Accepted password for …`` at Info level. It matches :ref:`filters-wordpress-good`. Recording it does not cause a ban.

REST and XML-RPC successes are independent controls: :ref:`WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS` and :ref:`WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS`.

A syslog destination that discards Info-level messages will not retain these records. Failed authentication is written at Notice level and is unaffected.

.. code-block:: php
   :caption: Example: Disable successful login logging

   /**
    * Do not log successful form logins.
    */
   define('WP_FAIL2BAN_LOG_AUTH_SUCCESS', false);

.. seealso::
   * :ref:`feature-login-logging`
   * :ref:`WP_FAIL2BAN_AUTH_LOG`
   * :ref:`WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS`
   * :ref:`WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS`

.. rubric:: History
.. versionadded:: 6.3.0
