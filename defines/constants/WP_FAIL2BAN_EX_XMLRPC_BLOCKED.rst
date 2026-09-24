.. _WP_FAIL2BAN_EX_XMLRPC_BLOCKED:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_BLOCKED
-----------------------------

.. rubric:: Block XML-RPC requests.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Blocks XML-RPC requests except those admitted by configured exceptions:
trusted addresses, Jetpack addresses when Jetpack access is enabled, the
pingback allowance, and the supported extension admission filter. The
pingback allowance also leaves the standard XML-RPC system methods available
and limits the request to one actual ``pingback.ping`` call.

.. code-block:: php
   :caption: Example: Block XML-RPC requests

   /**
    * Block XML-RPC requests
    */
   define('WP_FAIL2BAN_EX_XMLRPC_BLOCKED', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_TRUSTED_IPS`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS`

.. rubric:: History
.. versionadded:: 4.3.2.0
