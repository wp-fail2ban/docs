.. _WP_FAIL2BAN_PROXIES:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PROXIES
-------------------

.. rubric:: Define trusted proxy servers.
.. include:: default-disabled.rst

----

Specifies a list of trusted proxy servers. When defined:

* If the remote address appears in the list, WPf2b will use the IP address from the X-Forwarded-For header
* If the remote address is not in the list and there is an X-Forwarded-For header, WPf2b will return a 403 error
* If there's no X-Forwarded-For header, WPf2b will behave as if WP_FAIL2BAN_PROXIES isn't defined

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
   * :ref:`clearing_the_cache`

.. rubric:: History
.. versionchanged:: 5.0.0
   Added IPv6 support.
   Added "Unknown Proxy in X-Forwarded-For" message.
.. versionchanged:: 4.0.0
   Entries can be ignored by prefixing with **#**
.. versionadded:: 2.0.0