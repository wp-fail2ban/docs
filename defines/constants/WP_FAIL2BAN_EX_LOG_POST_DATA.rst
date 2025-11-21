.. _WP_FAIL2BAN_EX_LOG_POST_DATA:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_POST_DATA
----------------------------

.. rubric:: Enable logging of POST data.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Enables logging of POST request data for blocked requests.

.. code-block:: php
   :caption: Example: Enable POST data logging

   /**
    * Enable logging of POST data.
    */
   define('WP_FAIL2BAN_EX_LOG_POST_DATA', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_PTR`
   * :ref:`WP_FAIL2BAN_EX_LOG_URL`

.. rubric:: History
.. versionadded:: 4.3.0