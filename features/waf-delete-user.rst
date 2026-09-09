.. _feature-waf-delete-user:

User deletion protection
========================

Requires ``delete_users`` capability before ``wp_delete_user`` proceeds. Catches plugins or probes that delete users without going through the admin capability checks.

.. include:: ../autogen/join/feature-waf-delete-user.rst
   :end-before: Source
