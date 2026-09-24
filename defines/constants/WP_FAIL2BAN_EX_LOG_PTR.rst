.. _WP_FAIL2BAN_EX_LOG_PTR:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_PTR
----------------------

.. rubric:: Enable logging of PTR record.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, Premium performs a reverse-DNS lookup synchronously while each
event is created and stores the result when available. The hourly lookup-table
job does not fill PTR values later. Enabling this setting therefore adds DNS
work to event-producing requests.

.. code-block:: php
   :caption: Example: Enable PTR record logging

   /**
    * Enable PTR record logging.
    */
   define('WP_FAIL2BAN_EX_LOG_PTR', true);

.. seealso::
   * :ref:`operating_event_storage`
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`
   * :ref:`WP_FAIL2BAN_EX_LOG_URL`

.. rubric:: History
.. versionadded:: 5.1.0
