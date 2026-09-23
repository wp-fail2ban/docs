.. _feature-jetpack:

Jetpack integration
===================

Premium. Blocking XML-RPC can also interrupt Jetpack, which reaches WordPress through that interface. Jetpack integration lets an operator retain general XML-RPC blocking while admitting requests from Jetpack's published source addresses. WP fail2ban maintains that source list and, when :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK` is enabled, allows its addresses through the block.

This exception relies on the source list being current. Defining :ref:`WP_FAIL2BAN_EX_XMLRPC_JETPACK_IPS` disables automatic list updates. If Jetpack later sends requests from an address absent from that static list, XML-RPC blocking can refuse them, so the static list must be maintained separately.

.. include:: ../autogen/join/feature-jetpack.rst
   :end-before: Source
