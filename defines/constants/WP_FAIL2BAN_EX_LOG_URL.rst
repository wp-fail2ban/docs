.. _WP_FAIL2BAN_EX_LOG_URL:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_URL
----------------------

.. rubric:: Enable logging of request URL.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, Premium stores the request method and ``REQUEST_URI`` for every
event when those values are available. ``REQUEST_URI`` is a request target, not
an absolute URL assembled from scheme and host, and it can include a query
string. Success-class and WAF-class events select these fields independently of
this setting.

.. code-block:: php
   :caption: Example: Enable URL logging

   /**
    * Enable logging of request URL.
    */
   define('WP_FAIL2BAN_EX_LOG_URL', true);

.. seealso::
   * :ref:`operating_event_storage`
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_PTR`
   * :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`

.. rubric:: History
.. versionadded:: 4.3.0
