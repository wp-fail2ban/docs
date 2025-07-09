.. _WPF2B_EVENT_OTHER_UNKNOWN_PROXY:

WPF2B_EVENT_OTHER_UNKNOWN_PROXY
-------------------------------

.. rubric:: Attempted access via an untrusted proxy.

+-----------+-----------+---------------------------------------------------------------------------+
| syslog    | Facility  | .. include:: ../facility_log_auth.rst                                     |
|           +-----------+---------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                          |
|           +-----------+---------------------------------------------------------------------------+
|           | Example   | ``Untrusted X-Forwarded-For header on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+---------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                             |
|           +-----------+---------------------------------------------------------------------------+
|           | Rule      | ``Untrusted X-Forwarded-For header<_tail>``                               |
+-----------+-----------+---------------------------------------------------------------------------+

.. seealso::
   :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionadded:: 5.0.0
