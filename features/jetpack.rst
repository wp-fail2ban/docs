.. _feature-jetpack:

Jetpack integration
===================

The Premium Jetpack integration keeps Jetpack working when XML-RPC is otherwise blocked. When :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK` is enabled, |WPf2b| allows requests from Jetpack's published source addresses while continuing to block other XML-RPC traffic.

This exception relies on the source list being current. Defining :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK_IPS` disables automatic list updates. If Jetpack later sends requests from an address absent from that static list, XML-RPC blocking can refuse them, so the static list must be maintained separately.

.. include:: ../autogen/join/feature-jetpack.rst
   :end-before: Source
