.. _WPF2B_EVENT_PASSWORD_REQUEST:
.. _WPF2B_EVENT_PASSWORD_REQUEST_OK:

WPF2B_EVENT_PASSWORD_REQUEST_OK
-------------------------------

.. rubric:: Password reset request.

Premium listener: ``WPF2B_EVENT_PASSWORD_REQUEST_OK``.

Premium emits this event when :ref:`WP_FAIL2BAN_LOG_PASSWORD_REQUEST` is
enabled and WordPress allows password recovery for a recognised account.

Reset-key storage, mail generation and delivery, and the eventual password
change happen later and are not reported by this event.

+------------+-----------+----------------------------------------------------------------------------------+
| syslog     | Facility  | :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`                                          |
|            +-----------+----------------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                                 |
|            +-----------+----------------------------------------------------------------------------------+
|            | Example   | ``Password reset requested for Gargravarr on fqdn.example.com from 192.0.42.1``  |
+------------+-----------+----------------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-extra`                                                   |
|            +-----------+----------------------------------------------------------------------------------+
|            | Rule      | .. include:: ../../autogen/filters.d/rules/password-reset.rst.inc                |
+------------+-----------+------------------------------------+---------------------------------------------+
| EventData  | username  | .. include:: ../username-type.rst  | .. include:: ../username-description.rst    |
+------------+-----------+------------------------------------+---------------------------------------------+


.. seealso::
   | :ref:`feature-password-reset`
   | :ref:`WPF2B_EVENT_PASSWORD_REQUEST_FAIL`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_PASSWORD_REQUEST`

.. rubric:: History
.. versionchanged:: 6.3.0
   Recorded after WordPress allows password recovery.
.. versionchanged:: 6.0.0
   Added ``F-ALT_USER`` tag.
.. versionadded:: 4.0.0
