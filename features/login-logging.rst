.. _feature-login-logging:

Login logging
=============

Core always logs authentication. Success goes to :ref:`filters-wordpress-good`; failures are soft, except unknown-user REST/XML-RPC attempts which are hard. Empty-username POSTs to ``wp-login.php`` are a distinct event.

REST and XML-RPC share the same ``wp_login`` / ``wp_login_failed`` hooks; the event class differs so Premium listeners can tell them apart. The syslog text includes a ``REST`` or ``XML-RPC`` prefix on failures.

In 6.3 this is the Logging tab “authentication” facility. The Brute-force protection card is this feature, locked on.

.. include:: ../autogen/join/feature-login-logging.rst
