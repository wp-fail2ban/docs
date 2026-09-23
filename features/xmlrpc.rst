.. _feature-xmlrpc:

XML-RPC
========

XML-RPC exposes remote authentication and application methods that a site may not need, while some sites still depend on it for Jetpack, other integrations, or pingbacks. Blocking the interface removes that general remote route and allows the operator to preserve only the required exceptions. :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` can refuse XML-RPC while allowing configured trusted addresses, enabled Jetpack sources, or pingbacks.

A trusted-address exception admits every XML-RPC client resolved to that address, so an address shared through NAT or egress also admits unrelated clients using it. In pingback-only mode, ``pingback.ping`` remains available alongside the standard XML-RPC system methods. See :ref:`feature-pingbacks` for the one-pingback-per-request limit.

Multicall authentication floods are hard failures and abort the request. Ordinary XML-RPC authentication has its own interface-labelled messages and Premium events. Successful authentication logging is off by default because API clients may authenticate on every request; see :ref:`feature-login-logging`.

:ref:`WP_FAIL2BAN_XMLRPC_LOG` is a file path for a raw XML dump, not the syslog facility :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`. It is outside the UI and can grow rapidly while recording sensitive request content.

XML-RPC blocking and trusted addresses are on the Block tab in Advanced settings; Jetpack integration is on Remote IPs.

.. include:: ../autogen/join/feature-xmlrpc.rst
   :end-before: Source

.. toctree::
   :maxdepth: 1

   pingbacks
