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

The Cloudflare methods require :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE`. The ``CF-IPCountry`` header is used only when the connecting address is in the Cloudflare IP list. Without that trust boundary, a client that can reach WordPress can supply its own country header and change both country blocking and the country stored with Premium events.

.. code-block:: php
   :caption: Example: Use Cloudflare country headers only

   define('WP_FAIL2BAN_EX_GEOLOCATION', 'cloudflare-only');

Country blocking and the Premium event store use the resulting ISO code. When no country can be resolved, :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL` controls whether the request is allowed or denied.

.. seealso::
   * :ref:`feature-country-blocking`
   * :ref:`WP_FAIL2BAN_EX_GEOLOCATION_FAIL`
   * :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE`
   * :ref:`WP_FAIL2BAN_EX_MAXMIND_LICENSE`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`

.. rubric:: History
.. versionchanged:: 6.3.0
   Cloudflare methods require Trust Cloudflare; the country header is used only from a Cloudflare connecting address.
.. versionadded:: 6.0.0
