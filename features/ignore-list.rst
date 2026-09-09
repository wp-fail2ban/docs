.. _feature-ignore-list:

Ignore list
===========

Premium. If the **resolved client IP** is in :ref:`WP_FAIL2BAN_EX_IGNORE_IPS`, |WPf2b| performs no logging, blocking, event storage, or WAF checks for the request.

Use for monitoring systems and office egress you never want fail2ban to see.

.. include:: ../autogen/join/feature-ignore-list.rst
   :end-before: Source
