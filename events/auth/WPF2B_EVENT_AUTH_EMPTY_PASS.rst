.. _WPF2B_EVENT_AUTH_EMPTY_PASS:

WPF2B_EVENT_AUTH_EMPTY_PASS
---------------------------

.. rubric:: Empty Password.

Premium listener: ``WPF2B_EVENT_AUTH_EMPTY_PASS``.

Recorded when the login form is submitted with a nonblank identifier and a blank password. WordPress rejects the submission before ordinary password authentication, so |WPf2b| writes this dedicated message instead of the usual credential-failure message.

+------------+-----------+-------------------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                               |
|            +-----------+-------------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                    |
|            +-----------+-------------------------------------------------------------------------------------+
|            | Example   | ``Authentication attempt with empty password on fqdn.example.com from 192.0.42.1``  |
+------------+-----------+-------------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-soft`                                                       |
|            +-----------+-------------------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/auth-empty.rst.inc                       |
+------------+-----------+-----------------------------------+-------------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst | .. include:: ../username-description.rst        |
+------------+-----------+-----------------------------------+-------------------------------------------------+

The EventData ``password`` field is ``null``. If an expired authentication
cookie was observed earlier in the request, the syslog message includes
``(cookie expired)`` and uses Info rather than Notice. That variant does not
match the shipped soft filter, although Premium still records the event.

.. seealso::
   | :ref:`WPF2B_EVENT_AUTH_EMPTY_USER`
   | :ref:`operating_event_storage`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionadded:: 6.3.0
