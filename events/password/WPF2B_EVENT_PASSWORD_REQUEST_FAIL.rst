.. _WPF2B_EVENT_PASSWORD_REQUEST_FAIL:

WPF2B_EVENT_PASSWORD_REQUEST_FAIL
---------------------------------

.. rubric:: Failed password reset request.

Premium listener: ``WPF2B_EVENT_PASSWORD_REQUEST_FAIL``.

Premium emits this event when :ref:`WP_FAIL2BAN_LOG_PASSWORD_REQUEST` is
enabled and WordPress rejects a password-reset request. This includes an
unknown username; in that case, the stored username is the submitted value and
does not imply that the account exists. It also includes a recognised account
for which password recovery is not allowed.

.. list-table::
   :stub-columns: 1
   :widths: 12 18 70

   * - syslog
     - Facility
     - :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`
   * -
     - Level
     - .. include:: ../level_notice.rst
   * -
     - Examples
     - ``Failed password reset`` / ``Failed password reset for Gargravarr`` / ``Failed password reset for unknown user Zaphod``
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-soft`
   * -
     - Rule
     - .. include:: ../../autogen/filters.d/rules/password-reset-fail.rst.inc
   * - EventData
     - username
     - .. include:: ../username-description.rst

.. seealso::
   | :ref:`feature-password-reset`
   | :ref:`WPF2B_EVENT_PASSWORD_REQUEST_OK`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_PASSWORD_REQUEST`

.. rubric:: History
.. versionchanged:: 6.3.0
   Also recorded when password recovery is denied for a recognised account.
.. versionadded:: 6.0.0
