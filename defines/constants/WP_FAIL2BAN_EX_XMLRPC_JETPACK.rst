.. _WP_FAIL2BAN_EX_XMLRPC_JETPACK:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_XMLRPC_JETPACK
-----------------------------

.. rubric:: Allow Jetpack XML-RPC requests.
.. include:: default-disabled.rst
.. include:: premium-only.rst

----

Allows XML-RPC requests from Jetpack servers even when :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` is enabled.

.. code-block:: php
   :caption: Example: Allow Jetpack XML-RPC requests

   /**
    * Allow Jetpack XML-RPC requests
    */
   define('WP_FAIL2BAN_EX_XMLRPC_JETPACK', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`
   * :ref:`WP_FAIL2BAN_EX_XMLRPC_TRUSTED_IPS`

.. rubric:: History
.. versionadded:: 4.3.2.0