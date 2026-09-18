.. _WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN:

WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN
---------------------------------

.. rubric:: Access denied because the country could not be resolved.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN``.

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
     - ``Blocked access <F-HTTP_STATUS>\d\d\d</F-HTTP_STATUS> from unknown country<_tail>``
   * - EventData
     - country
     - unset (no ISO code was resolved)

Emitted when :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL` is enabled, geolocation is not ``disabled``, at least one country block list is non-empty, and the request's country could not be resolved. The response is HTTP 403. Unlike :ref:`WPF2B_EVENT_BLOCK_COUNTRY`, this event does not represent a known blocked country code.

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL`
   | :ref:`feature-country-blocking`

.. rubric:: History
.. versionadded:: 6.3.0
