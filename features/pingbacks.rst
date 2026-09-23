.. _feature-pingbacks:

Pingbacks
=========

Sites that keep pingbacks available still need to distinguish ordinary link notifications from repeated failed or automated calls. :ref:`WP_FAIL2BAN_LOG_PINGBACKS` enables ordinary accepted and rejected pingback evidence, together with trackback evidence. When it is enabled, an accepted pingback produces soft evidence and most rejected pingbacks produce hard evidence. Error code 48 means that the pingback is already registered: WordPress returns that fault, but |WPf2b| does not add hard evidence for it.

:ref:`WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS` can leave ``pingback.ping`` available when other application methods are blocked. The standard XML-RPC system methods also remain available. Independently of the logging control, |WPf2b| allows one pingback call per XML-RPC request. In a multicall, later pingback entries receive individual faults while the request continues. The repeated-pingback condition is recorded once per request, and Premium attempts the corresponding event. With ordinary pingback logging off, its blocked-attempt message can match the soft filter; with logging on, the skipped-attempt message is informational rather than that soft match.

Trackbacks are described in :ref:`feature-trackbacks`.

.. include:: ../autogen/join/feature-pingbacks.rst
   :end-before: Source
