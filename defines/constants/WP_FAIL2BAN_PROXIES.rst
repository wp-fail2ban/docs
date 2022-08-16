.. _WP_FAIL2BAN_PROXIES:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PROXIES
-------------------

.. versionadded:: 2.0.0
.. versionchanged:: 4.0.0
   Entries can be ignored by prefixing with **#**
.. versionchanged:: 5.0.0
   Entries can include IPv6 addresses. 
   Added "Unknown Proxy in X-Forwarded-For" message.

----

A list of IP addresses for the trusted proxies that will appear as the remote IP for a request. When defined:

* If the remote address appears in the **WP_FAIL2BAN_PROXIES** list, *WPf2b* will use the IP address from the `X-Forwarded-For` header
* If the remote address does not appear in the **WP_FAIL2BAN_PROXIES** list and there is an `X-Forwarded-For` header, *WPf2b* will return a 403 error
* If there's no `X-Forwarded-For` header, *WPf2b* will behave as if **WP_FAIL2BAN_PROXIES** isn't defined

To set **WP_FAIL2BAN_PROXIES**, add something like the following to ``wp-config.php``:

.. code-block:: php

  define('WP_FAIL2BAN_PROXIES', [
      '192.168.0.42',
      '192.168.42.0/24'
  ]);

Premium
^^^^^^^

The list is processed and cached for performance. Updating the list from the UI will automatically clear the cache, but you must do so manually if you are using a ``define()``.

.. seealso::
  * :ref:`clearing_the_cache`
