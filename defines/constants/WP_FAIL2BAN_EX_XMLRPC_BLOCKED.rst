.. _WP_FAIL2BAN_EX_XMLRPC_BLOCKED:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_BLOCKED
-----------------------------

.. rubric:: Block XML-RPC requests.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Blocks all XML-RPC requests except those from trusted IPs (see :ref:`WP_FAIL2BAN_EX_XMLRPC_TRUSTED_IPS`).

.. code-block:: php
   :caption: Example: Block XML-RPC requests

   /**
    * Block XML-RPC requests
    */
   define('WP_FAIL2BAN_EX_XMLRPC_BLOCKED', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_TRUSTED_IPS`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK`

.. rubric:: History
.. versionadded:: 4.3.2.0