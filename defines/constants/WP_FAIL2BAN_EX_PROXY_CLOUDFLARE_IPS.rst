.. _WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS
-----------------------------------

.. rubric:: Trusted Cloudflare IP addresses.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Defines a static list of trusted Cloudflare IPv4 or IPv6 CIDR ranges. This is
useful where |WPf2b| cannot maintain the list through outbound requests.

.. important::
   The Cloudflare IP addresses are subject to change. By defining this constant, |WPf2b| **will not update the list** automatically; it is your responsibility to keep the list up to date.

Use the current ranges published at `Cloudflare IP Ranges
<https://www.cloudflare.com/ips/>`_. Do not copy a dated list from the manual
into the addresses that |WPf2b| trusts to supply visitor information.

.. seealso::
   :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE`

.. rubric:: History
.. versionadded:: 4.4.0
