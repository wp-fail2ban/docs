.. _WP_FAIL2BAN_EX_LOG_REFERER:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_REFERER
--------------------------

.. rubric:: Enable logging of HTTP referer.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, Premium stores the HTTP Referer for every event when the server
supplies it. Success-class and WAF-class events select this field independently
of the setting. [#]_

.. code-block:: php
   :caption: Example: Enable referer logging

   /**
    * Enable logging of HTTP referer.
    */
   define('WP_FAIL2BAN_EX_LOG_REFERER', true);

.. seealso::
   * :ref:`operating_event_storage`
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_USER_AGENT`

.. rubric:: History
.. versionadded:: 4.3.0

.. rubric:: Footnotes
.. [#] The misspelling of "referer" is intentional and matches the HTTP specification where it was originally misspelled.
