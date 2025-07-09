.. _WPF2B_EVENT_BLOCK_COUNTRY:

WPF2B_EVENT_BLOCK_COUNTRY
-------------------------

.. rubric:: Attempted access from a blocked Country.
.. rubric:: *Premium only*

+------------+-----------+---------------------------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_log_auth.rst                                     |
|            +-----------+---------------------------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                                          |
|            +-----------+---------------------------------------------------------------------------+
|            | Example   | ``Blocked access from country 'FR' on fqdn.example.com from 192.0.42.1``  |
+------------+-----------+---------------------------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-hard`                                             |
|            +-----------+---------------------------------------------------------------------------+
|            | Rule      | ``Blocked access from country '<F-ISO_CODE>..</F-ISO_CODE>'<_tail>``      |
+------------+-----------+-------------+-------------------------------------------------------------+
| EventData  | country   | ``string``  | ISO 3166-1 alpha-2 code [#f1]_                              |
+------------+-----------+-------------+-------------------------------------------------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ISO_CODE`` tag.
.. versionadded:: 4.3.0

.. rubric:: Footnotes
.. [#f1]
   `<https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Current_codes>`__