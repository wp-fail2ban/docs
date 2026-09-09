.. _feature-xmlrpc:

XML-RPC
=======

Enable :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` to reject XML-RPC requests. Trusted IPs, :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK`, and :ref:`WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS` can allow required clients or pingbacks through the blocker.

Multicall authentication floods are hard failures and abort the request. Ordinary XML-RPC authentication uses the core authentication logging and is identified as XML-RPC in the message.

:ref:`WP_FAIL2BAN_XMLRPC_LOG` is a **file path** for a raw XML dump. It is not the syslog facility :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`. It is not in the UI. Use it only when debugging an attack; the file grows quickly.

XML-RPC blocking and trusted addresses are on the Block tab in Advanced settings. Jetpack integration is on the Remote IPs tab.

.. include:: ../autogen/join/feature-xmlrpc.rst
   :end-before: Source

.. toctree::
   :maxdepth: 1

   pingbacks
