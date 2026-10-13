.. _WPF2B_EVENT_BLOCK_COUNTRY_451:

WPF2B_EVENT_BLOCK_COUNTRY_451
-----------------------------

.. rubric:: Attempted access from a country blocked with HTTP 451.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_BLOCK_COUNTRY_451``.

Premium emits this event when a request's resolved country appears in
:ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451`. The request is denied with HTTP 451
Unavailable For Legal Reasons and receives a ``Link`` header pointing at the
site as ``rel="blocked-by"``.

If the country also appears in the HTTP 403 list, that list takes precedence
and Premium emits :ref:`WPF2B_EVENT_BLOCK_COUNTRY` instead.

.. list-table::
   :stub-columns: 1
   :widths: 12 18 70

   * - syslog
     - Facility
     - :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG`
   * -
     - Level
     - .. include:: ../level_notice.rst
   * -
     - Example
     - ``Blocked access 451 from country 'FR' on fqdn.example.com from 192.0.42.1``
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-hard`
   * -
     - Rule
     - .. include:: ../../autogen/filters.d/rules/blocked-country.rst.inc
   * - EventData
     - country
     - ISO 3166-1 alpha-2 code

.. seealso::
   | :ref:`feature-country-blocking`
   | :ref:`WPF2B_EVENT_BLOCK_COUNTRY`
   | :ref:`WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451`

.. rubric:: History
.. versionadded:: 6.0.0
   Added ``F-HTTP_STATUS`` and ``F-ISO_CODE`` tags.
