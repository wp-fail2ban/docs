.. _feature-pingbacks:

Pingbacks
=========

Pingbacks arrive through the XML-RPC ``pingback.ping`` method. Successful pingbacks are soft failures; pingback errors are hard failures, except error code 48, which means the pingback is already registered.

:ref:`WP_FAIL2BAN_LOG_PINGBACKS` enables the informational success log. :ref:`WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS` keeps pingbacks available when other XML-RPC methods are blocked.

Trackbacks: :ref:`feature-trackbacks`.

.. include:: ../autogen/join/feature-pingbacks.rst
   :end-before: Source
