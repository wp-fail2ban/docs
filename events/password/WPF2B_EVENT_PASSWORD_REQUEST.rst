.. _WPF2B_EVENT_PASSWORD_REQUEST:

WPF2B_EVENT_PASSWORD_REQUEST
----------------------------

.. rubric:: Password reset request.

+-----------+---------------+-------------------------------------------------+
| syslog    | Facility      | :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`         |
|           +---------------+-------------------------------------------------+
|           | Level         | NOTICE                                          |
+-----------+---------------+-------------------------------------------------+
| fail2ban  | Filter        | :ref:`wordpress-extra_conf`                     |
|           +---------------+-------------------------------------------------+
|           | Rule          | ``Password reset requested for .* from <HOST>`` |
+-----------+---------------+-------------------------------------------------+
| EventData | ``$username`` | Username                                        |
+-----------+---------------+-------------------------------------------------+

.. versionadded:: 4.0.0
