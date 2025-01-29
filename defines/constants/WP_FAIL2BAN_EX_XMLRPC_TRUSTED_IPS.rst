.. _WP_FAIL2BAN_EX_XMLRPC_TRUSTED_IPS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_TRUSTED_IPS
---------------------------------

.. rubric:: List of trusted IPs for XML-RPC requests.
.. include:: premium-only.rst

.. versionadded:: 4.3.2.0

----

Specifies a list of IP addresses that are allowed to make XML-RPC requests when :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` is enabled.

.. code-block:: php
   :caption: Example: Allow specific IPs for XML-RPC

   /**
    * Trusted IPs for XML-RPC requests
    */
   define('WP_FAIL2BAN_EX_XMLRPC_TRUSTED_IPS', [
       '192.168.1.100',
       '192.168.1.101'
   ]);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK`

