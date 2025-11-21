.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_BLOCK_COUNTRIES
------------------------------

.. rubric:: Block requests from specified countries.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Blocks requests from specified countries using MaxMind's GeoIP2 database. Requires a MaxMind license key (see :ref:`WP_FAIL2BAN_EX_MAXMIND_LICENSE`).

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
   * :ref:`WP_FAIL2BAN_EX_MAXMIND_LICENSE`

.. rubric:: History
.. versionadded:: 4.3.2.0