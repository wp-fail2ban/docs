.. _WP_FAIL2BAN_EX_PROXY_CLOUDFLARE:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_PROXY_CLOUDFLARE
-------------------------------

.. rubric:: Enable Cloudflare proxy support.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Enables support for sites using Cloudflare as a proxy. When enabled, |WPf2b| merges the maintained Cloudflare IP list into the trusted proxies used for ``X-Forwarded-For``, so the logged address is the visitor address supplied by Cloudflare rather than the Cloudflare edge address.

Trust Cloudflare is also required before the Cloudflare geolocation methods on :ref:`WP_FAIL2BAN_EX_GEOLOCATION` can be selected. The ``CF-IPCountry`` header is used only when the connecting address is in the Cloudflare IP list.

.. code-block:: php
   :caption: Example: Enable Cloudflare support

   /**
    * Enable Cloudflare proxy support
    */
   define('WP_FAIL2BAN_EX_PROXY_CLOUDFLARE', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PROXIES`
   * :ref:`WP_FAIL2BAN_EX_PROXY_CLOUDFLARE_IPS`
   * :ref:`WP_FAIL2BAN_EX_GEOLOCATION`
   * :ref:`feature-cloudflare`

.. rubric:: History
.. versionchanged:: 6.3.0
   Also gates Cloudflare geolocation methods and country-header trust.
.. versionadded:: 4.3.2.0
