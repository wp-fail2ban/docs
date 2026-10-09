.. _feature-pingbacks:

Pingbacks
=========

|WPf2b| writes messages for accepted and rejected pingbacks, allowing an operator or jail to distinguish ordinary link notifications from repeated failed or automated calls. An accepted pingback can match the soft filter, while most rejected pingbacks can match the hard filter. Error code 48 means that the pingback is already registered: WordPress returns that fault without adding a hard-filter message.

It also allows only one pingback call per XML-RPC request, independently of whether ordinary pingback logging is enabled. Additional pingbacks in the same request serve no legitimate purpose and would let a caller sidestep request-based rate limiting. In a multicall, later pingback entries therefore receive individual faults while the request continues. |WPf2b| writes one repeat-pingback message for the request and stores the corresponding Premium event. With ordinary pingback logging off, that message can match the soft filter; with logging on, it is informational instead.

:ref:`WP_FAIL2BAN_LOG_PINGBACKS` controls ordinary pingback logging and the trackback messages described in :ref:`feature-trackbacks`. When other application methods are blocked, :ref:`WP_FAIL2BAN_EX_XMLRPC_ALLOW_PINGBACKS` can leave ``pingback.ping`` available; the standard XML-RPC system methods also remain available.

.. include:: ../autogen/join/feature-pingbacks.rst
   :end-before: Source
