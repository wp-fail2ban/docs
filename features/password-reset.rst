.. _feature-password-reset:

Password reset
==============

Password-reset logging makes account-recovery requests visible in the host log. Repeated requests for the same account can come from a user who keeps forgetting a password, a user retrying because the account email is stale or undeliverable, or somebody targeting the account for spearphishing.

:ref:`WP_FAIL2BAN_LOG_PASSWORD_REQUEST` enables this logging and is off by default. |WPf2b| records an accepted request when WordPress recognises the account and decides to attempt recovery; Premium also stores the corresponding event at this point. This boundary is deliberate: the attempt to recover the account is the useful signal, regardless of whether mail is later delivered or the password is changed. Rejected requests are also recorded, including submissions whose username does not identify an account.

The control appears on the Logging tab in Advanced settings. Free shows it as read-only; use the constant for an individual change.

.. include:: ../autogen/join/feature-password-reset.rst
   :end-before: Source
