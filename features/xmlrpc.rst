.. _feature-xmlrpc:

XML-RPC
=======

XML-RPC is the second 6.3 **policy** grouping (internal id ``xmlrpc``), but it has no QuickStart card. Interaction prose lives here.

The usual intent is: **block XML-RPC**, keep **Jetpack** working, and optionally keep **pingbacks**. Enable :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED`, then add trusted IPs, :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK`, and/or :ref:`WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS`. Jetpack’s canonical feature home is Remote IPs (managed list + cron); this page is the blocker that consults it.

Multicall auth floods are a hard failure and abort the request. Ordinary XML-RPC login success/fail share Core’s auth logging.

:ref:`WP_FAIL2BAN_XMLRPC_LOG` is a **file path** for a raw XML dump. It is not the syslog facility :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`. It is not in the UI. Use it only when debugging an attack; the file grows quickly.

In 6.3 the block/trusted-IP controls are on the Block tab; Jetpack is under Remote IPs.

.. include:: ../autogen/join/feature-xmlrpc.rst

.. toctree::
   :maxdepth: 1

   pingbacks
