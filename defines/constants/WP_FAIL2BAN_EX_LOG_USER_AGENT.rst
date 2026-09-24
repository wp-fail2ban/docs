.. _WP_FAIL2BAN_EX_LOG_USER_AGENT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_USER_AGENT
-----------------------------

.. rubric:: Enable logging of User-Agent.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, Premium stores the HTTP User-Agent for every event when the server
supplies it. Success-class and WAF-class events select this field independently
of the setting.

.. code-block:: php
   :caption: Example: Enable User-Agent logging

   /**
    * Enable logging of User-Agent.
    */
   define('WP_FAIL2BAN_EX_LOG_USER_AGENT', true);

.. seealso::
   * :ref:`operating_event_storage`
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_REFERER`

.. rubric:: History
.. versionadded:: 4.3.0
