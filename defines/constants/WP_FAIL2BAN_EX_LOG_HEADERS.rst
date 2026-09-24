.. _WP_FAIL2BAN_EX_LOG_HEADERS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_HEADERS
--------------------------

.. rubric:: Enable logging of HTTP headers.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, Premium stores available ``HTTP_*`` server variables for every
event, excluding Referer and User-Agent because they have separate fields.
Depending on the server, this can include cookies and ``Authorization`` values.
WAF events select headers independently of this setting. The stored value is a
selected, flattened set of server variables, not a guarantee that every
incoming header was exposed to PHP.

.. code-block:: php
   :caption: Example: Enable HTTP header logging

   /**
    * Enable logging of HTTP headers.
    */
   define('WP_FAIL2BAN_EX_LOG_HEADERS', true);

.. seealso::
   * :ref:`operating_event_storage`
   * :ref:`WP_FAIL2BAN_EX_LOG_USER_AGENT`
   * :ref:`WP_FAIL2BAN_EX_LOG_REFERER`

.. rubric:: History
.. versionadded:: 4.3.0
