.. _WPF2B_EVENT_BLOCK_COUNTRY_451:

WPF2B_EVENT_BLOCK_COUNTRY_451
-----------------------------

.. rubric:: Attempted access from a country blocked with HTTP 451.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_BLOCK_COUNTRY_451``.

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

Unlike :ref:`WPF2B_EVENT_BLOCK_COUNTRY` (HTTP 403), this event returns **451 Unavailable For Legal Reasons** and sends a ``Link`` header pointing at the site as ``rel="blocked-by"``.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451`
   | :ref:`feature-country-blocking`

.. rubric:: History
.. versionadded:: 6.0.0
   Added ``F-HTTP_STATUS`` and ``F-ISO_CODE`` tags.
