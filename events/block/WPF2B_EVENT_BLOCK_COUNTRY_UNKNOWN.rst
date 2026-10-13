.. _WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN:

WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN
---------------------------------

.. rubric:: Access denied because the country could not be resolved.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN``.

Premium emits this event when :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL` makes
country blocking fail closed and the request's country cannot be resolved. The
request is denied with HTTP 403.

This event records an unresolved country, not a known country on the HTTP 403
or 451 list. Those denials use :ref:`WPF2B_EVENT_BLOCK_COUNTRY` or
:ref:`WPF2B_EVENT_BLOCK_COUNTRY_451`.

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
     - ``Blocked access 403 from unknown country on fqdn.example.com from 192.0.42.1``
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-hard`
   * -
     - Rule
     - .. include:: ../../autogen/filters.d/rules/blocked-country-unknown.rst.inc
   * - EventData
     - country
     - unset (no ISO code was resolved)

.. seealso::
   | :ref:`feature-country-blocking`
   | :ref:`WPF2B_EVENT_BLOCK_COUNTRY`
   | :ref:`WPF2B_EVENT_BLOCK_COUNTRY_451`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL`

.. rubric:: History
.. versionadded:: 6.3.0
