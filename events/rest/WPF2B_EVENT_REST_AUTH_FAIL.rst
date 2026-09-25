.. _WPF2B_EVENT_REST_AUTH_FAIL:

WPF2B_EVENT_REST_AUTH_FAIL
--------------------------

.. rubric:: REST authentication failed.

Premium listener: ``WPF2B_EVENT_REST_AUTH_FAIL``.

Emitted for reached REST authentication failures, including failed Application
Password authentication. Unknown-user attempts are a hard failure; known-user
failures are soft.

.. list-table::
   :stub-columns: 1
   :widths: 12 18 70

   * - syslog
     - Facility
     - .. include:: ../facility_log_auth.rst
   * -
     - Level
     - .. include:: ../level_notice.rst
   * -
     - Examples
     - ``REST authentication failure for Arthur`` / ``REST authentication attempt for unknown user Agrajag``
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-hard` (unknown user) / :ref:`filters-wordpress-soft` (known user)
   * -
     - Rule (unknown user)
     - .. include:: ../../autogen/filters.d/rules/auth-api-unknown.rst.inc
   * -
     - Rule (known user)
     - .. include:: ../../autogen/filters.d/rules/auth-api-failure.rst.inc
   * - EventData
     - username
     - .. include:: ../username-description.rst
   * -
     - password
     - Submitted password.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WPF2B_EVENT_AUTH_FAIL`

.. rubric:: History
.. versionadded:: 4.1.0
