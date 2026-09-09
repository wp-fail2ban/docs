.. _WP_FAIL2BAN_EX_GEOLOCATION:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_GEOLOCATION
--------------------------

.. rubric:: Choose how country codes are resolved.
.. include:: default-not-set.rst.inc
.. include:: premium-only.rst.inc

----

Selects the geolocation method used for country blocking and for the ISO country code stored with Premium events.

Allowed values:

* ``maxmind-only`` — MaxMind GeoIP2 (default)
* ``cloudflare-only`` — Cloudflare ``CF-IPCountry`` header
* ``maxmind-cloudflare`` — MaxMind, falling back to Cloudflare
* ``disabled`` — do not resolve country codes

.. code-block:: php
   :caption: Example: Use Cloudflare country headers only

   define('WP_FAIL2BAN_EX_GEOLOCATION', 'cloudflare-only');

Country blocking and the Premium event store use the resulting ISO code.

.. seealso::
   * :ref:`feature-country-blocking`
   * :ref:`WP_FAIL2BAN_EX_MAXMIND_LICENSE`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`

.. rubric:: History
.. versionadded:: 6.0.0
