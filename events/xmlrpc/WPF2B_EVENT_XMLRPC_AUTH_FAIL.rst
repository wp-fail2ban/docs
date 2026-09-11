.. _WPF2B_EVENT_XMLRPC_AUTH_FAIL:

WPF2B_EVENT_XMLRPC_AUTH_FAIL
----------------------------

.. rubric:: XML-RPC authentication failed.

Premium listener: ``WPF2B_EVENT_XMLRPC_AUTH_FAIL``.

Emitted from ``wp_login_failed`` when the request is XML-RPC. Unknown-user attempts are a hard failure; known-user failures are soft.

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
     - ``XML-RPC authentication failure for Arthur`` / ``XML-RPC authentication attempt for unknown user Agrajag``
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-hard` (unknown user) / :ref:`filters-wordpress-soft` (known user)
   * -
     - Rule
     - ``(?:REST|XML-RPC) authentication (?:attempt(?: \(repeat\))? for unknown user|failure(?: \(repeat\))? for) <F-ALT_USER>.*</F-ALT_USER>``
   * - EventData
     - username
     - .. include:: ../username-description.rst

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WPF2B_EVENT_AUTH_FAIL`

.. rubric:: History
.. versionadded:: 4.1.0
