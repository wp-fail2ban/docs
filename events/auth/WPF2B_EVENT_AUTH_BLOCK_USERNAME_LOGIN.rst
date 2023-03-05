.. _WPF2B_EVENT_AUTH_BLOCK_USERNAME_LOGIN:

WPF2B_EVENT_AUTH_BLOCK_USERNAME_LOGIN
-------------------------------------

.. rubric:: Blocked login with username.

+-----------+---------------+----------------------------------------------------------------+
| syslog    | Facility      | LOG_AUTH or LOG_AUTHPRIV                                       |
|           +---------------+----------------------------------------------------------------+
|           | Level         | NOTICE                                                         |
+-----------+---------------+----------------------------------------------------------------+
| fail2ban  | Filter        | :ref:`wordpress-hard_conf`                                     |
|           +---------------+----------------------------------------------------------------+
|           | Rule          | ``Blocked username authentication attempt for .* from <HOST>`` |
+-----------+---------------+----------------------------------------------------------------+
| EventData | ``$username`` | Username                                                       |
|           +---------------+----------------------------------------------------------------+
|           | ``$password`` | Password                                                       |
+-----------+---------------+----------------------------------------------------------------+

.. versionadded:: 4.3.0

.. seealso::
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   | :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN`
