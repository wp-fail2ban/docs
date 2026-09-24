.. _WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS
-------------------------------------

.. rubric:: Allow ``pingback.ping`` when XML-RPC is blocked.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` is enabled, this setting leaves
``pingback.ping`` available to otherwise blocked clients. The XML-RPC
interface's standard system methods remain available too. |WPf2b| permits the
first actual pingback call in a request and returns a per-call fault for later
pingbacks, allowing other entries in a multicall to continue.

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
