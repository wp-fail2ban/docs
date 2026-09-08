.. _WPF2B_EVENT_PASSWORD_REQUEST_FAIL:

WPF2B_EVENT_PASSWORD_REQUEST_FAIL
---------------------------------

.. rubric:: Failed password reset request.

Premium listener: ``WPF2B_EVENT_PASSWORD_REQUEST_FAIL``.

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
     - ``Failed password reset(?: for(?: (?:unknown user )?<F-ALT_USER>.*</F-ALT_USER>))?<_tail>``
   * - EventData
     - username
     - .. include:: ../username-description.rst

Logged from ``lostpassword_post`` when WordPress reports errors on the reset form.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WPF2B_EVENT_PASSWORD_REQUEST`
   | :ref:`feature-password-reset`

.. rubric:: History
.. versionadded:: 6.0.0
