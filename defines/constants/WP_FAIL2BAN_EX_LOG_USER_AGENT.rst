.. _WP_FAIL2BAN_EX_LOG_USER_AGENT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_USER_AGENT
-----------------------------

.. rubric:: Enable logging of User-Agent.
.. include:: default-disabled.rst
.. include:: premium-only.rst

.. versionadded:: 4.3.0

----

Enables logging of the HTTP User-Agent header for blocked requests.

.. code-block:: php
   :caption: Example: Enable User-Agent logging

   /**
    * Enable logging of User-Agent.
    */
   define('WP_FAIL2BAN_EX_LOG_USER_AGENT', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_REFERER`

