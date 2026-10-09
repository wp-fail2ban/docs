.. _feature-trackbacks:

Trackbacks
==========

|WPf2b| logs accepted trackbacks and submissions that fail after WordPress begins processing them. This lets an operator or jail distinguish ordinary trackback activity from attempts that WordPress could not store. Accepted trackbacks can match the soft filter, while failures after processing begins can match the hard filter. The receiving jail decides whether those matches lead to a ban. Submissions rejected before trackback processing begins produce no trackback message. WordPress's trackback code is old and exposes very few hooks, so |WPf2b| cannot observe those earlier failures.

:ref:`WP_FAIL2BAN_LOG_PINGBACKS` enables these messages; trackbacks share this switch with ordinary pingbacks. They use :ref:`WP_FAIL2BAN_PINGBACK_LOG` for their syslog facility. See :ref:`feature-pingbacks` for XML-RPC pingback messages and the one-call-per-request limit.

.. include:: ../autogen/join/feature-trackbacks.rst
   :end-before: Source
