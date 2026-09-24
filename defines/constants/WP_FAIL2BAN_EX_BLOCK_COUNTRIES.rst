.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_BLOCK_COUNTRIES
------------------------------

.. rubric:: Block requests from specified countries.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Returns HTTP 403 for requests whose resolved country appears in this list.
Country resolution follows :ref:`WP_FAIL2BAN_EX_GEOLOCATION`: it can use the
local MaxMind database, a trusted Cloudflare country header, or the configured
combination. A MaxMind licence is therefore not required for a working
Cloudflare-only policy.

Do not put the same country in this list and
:ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451`. If an overlap exists, this HTTP 403
list takes precedence.

.. code-block:: php
   :caption: Example: Block requests from specific countries

   /**
    * Block requests from specified countries
    */
   define('WP_FAIL2BAN_EX_BLOCK_COUNTRIES', [
       'RU',  // Russia
       'CN',  // China
       'KP'   // North Korea
   ]);

.. note::
   Country codes must be specified using ISO 3166-1 alpha-2 format.

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG`
   * :ref:`WP_FAIL2BAN_EX_GEOLOCATION`
   * :ref:`WP_FAIL2BAN_EX_MAXMIND_LICENSE`

.. rubric:: History
.. versionadded:: 4.3.2.0
