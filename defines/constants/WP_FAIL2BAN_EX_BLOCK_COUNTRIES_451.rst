.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451
----------------------------------

.. rubric:: Block requests from specified countries with a 451 status code.
.. include:: default-disabled.rst
.. include:: premium-only.rst

----

Blocks requests from specified countries with a 451 "Unavailable For Legal Reasons" status code.

Some politicians think their laws apply to the whole world, not just their own country. Rather than deal with demands to comply with laws you've never heard of and had no part in making, *WP fail2ban* can block requests from specified countries with a 451 "Unavailable For Legal Reasons" status code.

The message is deliberately neutral:

   The administrator of this site has blocked access from your country.

Future versions will allow you to specify a custom message.

.. code-block:: php
   :caption: Example: Block requests from specific countries

   /**
    * Block requests from specified countries
    */
   define('WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451', [
       'AT', 'BE', 'BG', 'HR', 'CY', 'CZ', 'DK', 'EE', 'FI', 'FR', 'DE', 'GR', 'HU', 'IE', 'IT', 'LV', 'LT', 'LU', 'MT', 'NL', 'PL', 'PT', 'RO', 'SK', 'SI', 'ES', 'SE', // EU (DSA)
       'GB'  // United Kingdom (OSA)
   ]);

.. note::
   Country codes must be specified using ISO 3166-1 alpha-2 format.

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG`

.. rubric:: History
.. versionadded:: 6.0.0