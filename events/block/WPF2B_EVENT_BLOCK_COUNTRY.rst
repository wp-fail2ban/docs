.. _WPF2B_EVENT_BLOCK_COUNTRY:

WPF2B_EVENT_BLOCK_COUNTRY
-------------------------

.. rubric:: Attempted access from a blocked Country.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_BLOCK_COUNTRY``.

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
     - ``Blocked access 403 from country 'FR' on fqdn.example.com from 192.0.42.1``
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-hard`
   * -
     - Rule
     - .. include:: ../../autogen/filters.d/rules/blocked-country.rst.inc
   * - EventData
     - country
     - ISO 3166-1 alpha-2 code [#f1]_

.. seealso::
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-ISO_CODE`` tag.
.. versionadded:: 4.3.0

.. rubric:: Footnotes
.. [#f1]
   `<https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2#Current_codes>`__
