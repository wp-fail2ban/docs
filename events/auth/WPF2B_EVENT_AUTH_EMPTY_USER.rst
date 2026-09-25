.. _WPF2B_EVENT_AUTH_EMPTY_USER:

WPF2B_EVENT_AUTH_EMPTY_USER
---------------------------

.. rubric:: Empty Username.

Premium listener: ``WPF2B_EVENT_AUTH_EMPTY_USER``.

+-----------+-----------+-------------------------------------------------------------------------------------+
| syslog    | Facility  | .. include:: ../facility_log_auth.rst                                               |
|           +-----------+-------------------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                                    |
|           +-----------+-------------------------------------------------------------------------------------+
|           | Example   | ``Authentication attempt with empty username on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+-------------------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-soft`                                                       |
|           +-----------+-------------------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/auth-empty.rst.inc                       |
+-----------+-----------+-------------------------------------------------------------------------------------+

Premium EventData stores the submitted ``password``; ``username`` is ``null``.
If an expired authentication cookie was observed earlier in the request, the
syslog message includes ``(cookie expired)`` and uses Info rather than Notice.
That variant does not match the shipped soft filter, although Premium still
records the event.

.. seealso::
   | :ref:`operating_event_storage`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionadded:: 4.3.0
