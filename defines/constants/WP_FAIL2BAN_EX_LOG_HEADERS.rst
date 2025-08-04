.. _WP_FAIL2BAN_EX_LOG_HEADERS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_HEADERS
--------------------------

.. rubric:: Enable logging of HTTP headers.
.. include:: default-disabled.rst
.. include:: premium-only.rst

----

Enables logging of HTTP request headers for blocked requests.

.. code-block:: php
   :caption: Example: Enable HTTP header logging

   /**
    * Enable logging of HTTP headers.
    */
   define('WP_FAIL2BAN_EX_LOG_HEADERS', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_LOG_USER_AGENT`
   * :ref:`WP_FAIL2BAN_EX_LOG_REFERER`

.. rubric:: History
.. versionadded:: 4.3.0