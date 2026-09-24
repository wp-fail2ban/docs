.. _WP_FAIL2BAN_PROXIES:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PROXIES
-------------------

.. rubric:: Define trusted proxy servers.
.. include:: default-disabled.rst.inc

----

Specifies a list of trusted immediate proxy addresses or networks. When address
resolution runs:

* a trusted immediate peer permits the first ``X-Forwarded-For`` value to
  become the client address;
* an untrusted immediate peer supplying that header produces unknown-proxy
  evidence and HTTP 403; and
* without the header, the validated immediate peer remains the client address.

Premium resolves the address eagerly. Free normally resolves it only when a
reached feature needs the address, so defining this list alone is not an
every-request admission check in Free. Enable :ref:`WP_FAIL2BAN_CHECK_PROXIES`
to make Free check eagerly. A malformed first forwarded value from a trusted
peer follows the separate PHP-error and HTTP 500 path.

.. code-block:: php
   :caption: Example: Define trusted proxies

   /**
    * Define trusted proxy servers
    */
   define('WP_FAIL2BAN_PROXIES', [
       '192.168.0.42',
       '192.168.42.0/24'
   ]);

.. note::
   In the Premium version, the list is processed and cached for performance. If you update the list via the UI, the cache is automatically cleared. If you update using define(), you must clear the cache manually.

.. seealso::
   * :ref:`WP_FAIL2BAN_CHECK_PROXIES`
   * :ref:`operating_scheduled`

.. rubric:: History
.. versionchanged:: 5.0.0
   Added IPv6 support.
   Added "Unknown Proxy in X-Forwarded-For" message.
.. versionchanged:: 4.0.0
   Entries can be ignored by prefixing with **#**
.. versionadded:: 2.0.0
