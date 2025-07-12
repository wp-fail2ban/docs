.. include:: ../../global.rst

.. _WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS
-----------------------------------

.. rubric:: Trusted Cloudflare IP addresses.
.. include:: default-disabled.rst
.. include:: premium-only.rst

.. versionadded:: 4.4.0

----

List of trusted Cloudflare IP addresses. Useful for environments with restricted outbound connectivity.

.. important::
   The Cloudflare IP addresses are subject to change. By defining this constant, |WPf2b| **will not update the list** automatically; it is your responsibility to keep the list up to date.

.. code-block:: php
   :caption: Cloudflare IP addresses as of 2025-07-10

   // Cloudflare IP addresses
   // https://www.cloudflare.com/ips/

   define( 'WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS', [
      '173.245.48.0/20',
      '103.21.244.0/22',
      '103.22.200.0/22',
      '103.31.4.0/22',
      '141.101.64.0/18',
      '108.162.192.0/18',
      '190.93.240.0/20',
      '188.114.96.0/20',
      '197.234.240.0/22',
      '198.41.128.0/17',
      '162.158.0.0/15',
      '104.16.0.0/13',
      '104.24.0.0/14',
      '172.111.64.0/18',
      '131.0.72.0/22',
      '2400:cb00::/32',
      '2606:4700::/32',
      '2803:f800::/32',
      '2405:b500::/32',
      '2405:8100::/32',
      '2a06:98c0::/29',
      '2c0f:f248::/32',
   ] );

.. seealso::
   :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE`
