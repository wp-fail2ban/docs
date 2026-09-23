.. _feature-password-reset:

Password reset
==============

Password-reset evidence helps an operator recognise valid requests for real accounts and reset submissions that WordPress rejects. Repeated accepted requests can indicate poor password hygiene, a user retrying because the account email is stale or undeliverable, or targeted activity such as spearphishing. Whether mail was sent or delivered does not distinguish those explanations; waiting for successful delivery would lose useful evidence when a mail problem is causing the retries.

The useful signal is WordPress accepting a valid request for a real account. A later failure does not change the meaning of that request. ``PASSWORD_REQUEST_OK`` therefore does not prove that a reset key was stored, mail was sent or delivered, the user received it, or the password was changed.

:ref:`WP_FAIL2BAN_LOG_PASSWORD_REQUEST` enables both accepted- and rejected-request evidence. It is off by default. When enabled, accepted requests produce a message and Premium ``PASSWORD_REQUEST_OK`` event; rejected requests produce a message and Premium ``PASSWORD_REQUEST_FAIL`` event. Rejected requests include those for which the submitted username does not identify an account.

The control appears on the Logging tab in Advanced settings. Free shows it as read-only; use the constant for an individual change.

.. include:: ../autogen/join/feature-password-reset.rst
   :end-before: Source
