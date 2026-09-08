.. _feature-ignore-list:

Ignore list
===========

Premium. If the **resolved client IP** is in :ref:`WP_FAIL2BAN_EX_IGNORE_IPS`, ``Init`` returns false: no logging, no blocking, no event store, no WAF. It is not “skip logging but still ban”.

Use for monitoring systems and office egress you never want fail2ban to see.

.. include:: ../autogen/join/feature-ignore-list.rst
