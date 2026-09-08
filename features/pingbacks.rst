.. _feature-pingbacks:

Pingbacks
=========

``pingback.ping`` lives in ``src/feature/XmlRpc.php``, so this feature sits under XML-RPC, not Comments. Success is soft; pingback errors (except code 48, already registered) are hard.

:ref:`WP_FAIL2BAN_LOG_PINGBACKS` enables the informational success log. Blocking XML-RPC while keeping pingbacks is :ref:`WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS` on the XML-RPC feature.

Trackbacks: :ref:`feature-trackbacks`.

.. include:: ../autogen/join/feature-pingbacks.rst
