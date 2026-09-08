.. _WP_FAIL2BAN_EX_XMLRPC_JETPACK_IPS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_JETPACK_IPS
---------------------------------

.. rubric:: Trusted Jetpack IP addresses.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Explicit list of Jetpack XML-RPC source addresses. |WPf2b| maintains this list on a schedule when :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK` is enabled.

.. important::
   Defining this constant is a locked-down escape hatch: |WPf2b| **will not update the list** automatically. Keep it current yourself.

This is not a separate XML-RPC feature. Canonical home is Remote IPs (managed IP lists); the XML-RPC blocker consults the list.

.. seealso::
   * :ref:`feature-jetpack`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`

.. rubric:: History
.. versionadded:: 4.4.0
