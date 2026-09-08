.. _feature-password-reset:

Password reset
==============

Logs successful ``retrieve_password`` requests (extra filter) and failed ``lostpassword_post`` attempts (soft). Off by default. Enable it if password-reset is an enumeration or flood path on your site.

The event formerly documented as ``PASSWORD_REQUEST`` is ``PASSWORD_REQUEST_OK``; the old page label remains as an alias.

In 6.3 this is on the Logging tab.

.. include:: ../autogen/join/feature-password-reset.rst
