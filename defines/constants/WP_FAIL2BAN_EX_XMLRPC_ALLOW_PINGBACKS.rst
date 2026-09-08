.. _WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS
-------------------------------------

.. rubric:: Allow ``pingback.ping`` when XML-RPC is blocked.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` is enabled, XML-RPC is refused except for trusted IPs, Jetpack (if enabled), and — if this constant is true — ``pingback.ping`` calls.

Use this when you want to keep pingbacks working while blocking the rest of the XML-RPC surface.

.. code-block:: php
   :caption: Example: Block XML-RPC but keep pingbacks

   define('WP_FAIL2BAN_EX_XMLRPC_BLOCKED', true);
   define('WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS', true);

.. seealso::
   * :ref:`feature-xmlrpc`
   * :ref:`feature-pingbacks`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`

.. rubric:: History
.. versionadded:: 6.0.0
