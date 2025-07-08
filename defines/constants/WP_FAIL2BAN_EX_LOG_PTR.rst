.. _WP_FAIL2BAN_EX_LOG_PTR:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_PTR
----------------------

.. rubric:: Enable logging of PTR record.
.. include:: default-disabled.rst
.. include:: premium-only.rst

.. versionadded:: 5.1.0

----

Enables logging of PTR record for blocked requests.

.. code-block:: php
   :caption: Example: Enable PTR record logging

   /**
    * Enable PTR record logging.
    */
   define('WP_FAIL2BAN_EX_LOG_PTR', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`
   * :ref:`WP_FAIL2BAN_EX_LOG_URL`
