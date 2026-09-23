.. _feature-trackbacks:

Trackbacks
==========

Remote trackback submissions can be legitimate, but repeated accepted or rejected submissions can become useful evidence when a jail evaluates the source's activity. :ref:`WP_FAIL2BAN_LOG_PINGBACKS` enables accepted and rejected trackback evidence together with ordinary pingback evidence; trackbacks have no separate switch. An accepted trackback produces soft evidence. Hard evidence covers a submission that begins trackback processing but does not reach successful storage; WordPress can reject other submissions before that coverage begins. Trackbacks use :ref:`WP_FAIL2BAN_PINGBACK_LOG` for their syslog facility.

A message can feed a fail2ban filter, but the receiving jail decides whether repeated matches lead to a ban. XML-RPC pingbacks have their own behaviour; see :ref:`feature-pingbacks`.

.. include:: ../autogen/join/feature-trackbacks.rst
   :end-before: Source
