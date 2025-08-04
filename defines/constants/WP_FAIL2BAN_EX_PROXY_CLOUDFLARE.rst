.. _WP_FAIL2BAN_EX_PROXY_CLOUDFLARE:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_PROXY_CLOUDFLARE
-------------------------------

.. rubric:: Enable Cloudflare proxy support.
.. include:: default-disabled.rst
.. include:: premium-only.rst

----

Enables support for sites using Cloudflare as a proxy. When enabled, WPf2b will use the IP address from the X-Forwarded-For header.

.. code-block:: php
   :caption: Example: Enable Cloudflare support

   /**
    * Enable Cloudflare proxy support
    */
   define('WP_FAIL2BAN_EX_PROXY_CLOUDFLARE', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PROXIES`

.. rubric:: History
.. versionadded:: 4.3.2.0