.. _feature-xmlrpc:

XML-RPC
========

|WPf2b| can close the general XML-RPC interface while preserving configured exceptions for trusted addresses, Jetpack sources, or pingbacks. This lets an operator remove remote authentication and application methods that the site does not need without necessarily disabling integrations that still depend on XML-RPC. :ref:`WP_FAIL2BAN_EX_XMLRPC_BLOCKED` enables the block.

A trusted-address exception admits every XML-RPC client resolved to that address, so an address shared through NAT or egress also admits unrelated clients using it. In pingback-only mode, ``pingback.ping`` remains available alongside the standard XML-RPC system methods. See :ref:`feature-pingbacks` for the one-pingback-per-request limit.

Independently of the interface-wide block, multicall authentication floods are hard failures and abort the request. Ordinary XML-RPC authentication writes messages labelled for XML-RPC and, in Premium, stores corresponding events. Successful authentication logging is off by default because API clients may authenticate on every request; see :ref:`feature-login-logging`.

For low-level diagnosis, :ref:`WP_FAIL2BAN_XMLRPC_LOG` can write raw XML requests to a file. It is a file path, not the syslog facility :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`, and is configured outside the UI. The file can grow rapidly and contains sensitive request content.

.. include:: ../autogen/join/feature-xmlrpc.rst
   :end-before: Source

.. toctree::
   :maxdepth: 1

   pingbacks
