.. _feature-login-logging:

Login logging
=============

Core always logs authentication. Successful authentication matches :ref:`filters-wordpress-good`; failures are soft, except unknown-user REST and XML-RPC attempts, which are hard. Empty-username POSTs to ``wp-login.php`` produce a distinct event.

REST and XML-RPC failures include a ``REST`` or ``XML-RPC`` prefix in the syslog message. Premium exposes distinct event names for integrations.

The :ref:`quickstart_brute_force_protection` card describes this always-on behaviour. Its facility is configured under authentication on the Logging tab in Advanced settings.

.. include:: ../autogen/join/feature-login-logging.rst
   :end-before: Source
