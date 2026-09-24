.. _WP_FAIL2BAN_EX_MAXMIND_LICENSE:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_MAXMIND_LICENSE
------------------------------

.. rubric:: MaxMind GeoIP2 license key.
.. include:: premium-only.rst.inc

----

Supplies the MaxMind licence key used to download and refresh the local
GeoLite2-Country database. MaxMind-based country resolution reads that local
database during requests. Cloudflare-only country resolution does not require
this key.

.. code-block:: php
   :caption: Example: Setting MaxMind license key

   /**
    * MaxMind GeoIP2 license key
    */
   define('WP_FAIL2BAN_EX_MAXMIND_LICENSE', 'your_license_key_here');

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`
   * :ref:`WP_FAIL2BAN_EX_GEOLOCATION`

.. rubric:: History
.. versionadded:: 4.3.0
