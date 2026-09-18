.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS
--------------------------------------------

.. rubric:: Disable country-block counters.
.. include:: default-false.rst.inc
.. include:: premium-only.rst.inc

----

By default, each country-block denial increments counters stored in a site option. Those counts appear on the Country Blocks dashboard widget when a country list is configured.

Defining this constant as ``true`` stops collection. Denials still return the usual HTTP status, write to syslog, and record a Premium event; only the counters are skipped. The counts are not a fail2ban jail and do not themselves ban an address.

The widget is not registered when both country lists are empty.

.. code-block:: php
   :caption: Example: Disable country-block counters

   /**
    * Disable country-block counters
    */
   define('WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS', true);

.. seealso::
   * :ref:`feature-country-blocking`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451`

.. rubric:: History
.. versionadded:: 6.3.0
