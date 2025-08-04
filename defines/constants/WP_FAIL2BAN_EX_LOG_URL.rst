.. _WP_FAIL2BAN_EX_LOG_URL:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_URL
----------------------

.. rubric:: Enable logging of request URL.
.. include:: default-disabled.rst
.. include:: premium-only.rst

----

Enables logging of the full request URL for blocked requests.

.. code-block:: php
   :caption: Example: Enable URL logging

   /**
    * Enable logging of request URL.
    */
   define('WP_FAIL2BAN_EX_LOG_URL', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_PTR`
   * :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`

.. rubric:: History
.. versionadded:: 4.3.0