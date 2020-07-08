.. _WP_FAIL2BAN_PROXIES:

WP_FAIL2BAN_PROXIES
-------------------

.. versionadded:: 2.0.0
.. versionchanged:: 4.0.0
   Entries can be ignored by prefixing with **#**

The idea here is to list the IP addresses of the trusted proxies that will appear as the remote IP for the request. When defined:

* If the remote address appears in the **WP_FAIL2BAN_PROXIES** list, *WPf2b* will log the IP address from the `X-Forwarded-For` header
* If the remote address does not appear in the **WP_FAIL2BAN_PROXIES** list, *WPf2b* will return a 403 error
* If there's no `X-Forwarded-For` header, *WPf2b* will behave as if **WP_FAIL2BAN_PROXIES** isn't defined

To set **WP_FAIL2BAN_PROXIES**, add something like the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_PROXIES','192.168.0.42,192.168.42.0/24');

*WPf2b* doesn't do anything clever with the list - beware of typos!

If you're running PHP 7 you can use an array instead:

.. code-block:: php

  define('WP_FAIL2BAN_PROXIES', [
      '192.168.0.42',
      '192.168.42.0/24'
  ]);

