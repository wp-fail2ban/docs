.. _WP_FAIL2BAN_CHECK_PROXIES:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_CHECK_PROXIES
-------------------------

.. rubric:: Check trusted proxies on every request.
.. include:: default-disabled.rst.inc

----

In Free, the client address is resolved when |WPf2b| needs it for logging or
storage. Enabling this forces that resolution — and therefore the
:ref:`WP_FAIL2BAN_PROXIES` trust check — on every request, including those that
produce no log message.

When proxies are configured and an untrusted peer presents
``X-Forwarded-For``, the request is rejected with a 403 even if nothing else
would have been logged. Premium already resolves the client address on every
request, so this setting has no effect there.

Disabled by default because Free otherwise only pays the resolution cost when
an event needs an address.

.. code-block:: php
   :caption: Example: Check proxies on every request

   /**
    * Check trusted proxies on every request.
    */
   define('WP_FAIL2BAN_CHECK_PROXIES', true);

.. seealso::
   * :ref:`feature-trusted-proxies`
   * :ref:`WP_FAIL2BAN_PROXIES`

.. rubric:: History
.. versionadded:: 6.3.0
