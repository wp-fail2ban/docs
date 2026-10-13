.. _WPF2B_EVENT_OTHER_UNKNOWN_PROXY:

WPF2B_EVENT_OTHER_UNKNOWN_PROXY
-------------------------------

.. rubric:: Attempted access via an untrusted proxy.

Premium listener: ``WPF2B_EVENT_OTHER_UNKNOWN_PROXY``.

Premium emits this event when trusted-proxy checking is configured and a
connection outside the :ref:`WP_FAIL2BAN_PROXIES` list supplies an
``X-Forwarded-For`` header. The event records the connection's source address,
and |WPf2b| rejects the request with HTTP 403.

+-----------+-----------+---------------------------------------------------------------------------+
| syslog    | Facility  | .. include:: ../facility_log_auth.rst                                     |
|           +-----------+---------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                          |
|           +-----------+---------------------------------------------------------------------------+
|           | Example   | ``Untrusted X-Forwarded-For header on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+---------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                             |
|           +-----------+---------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/untrusted-proxy.rst.inc        |
+-----------+-----------+---------------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-trusted-proxies`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_PROXIES`

.. rubric:: History
.. versionadded:: 5.0.0
