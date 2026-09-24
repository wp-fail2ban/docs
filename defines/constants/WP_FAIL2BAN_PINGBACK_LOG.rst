.. _WP_FAIL2BAN_PINGBACK_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PINGBACK_LOG
------------------------

.. rubric:: Facility for logging pingbacks and trackbacks.
.. include:: default-log_user.rst.inc

----

Specifies the syslog facility for ordinary XML-RPC pingback events and
WordPress trackback success/failure events. The multicall pingback-limit message
uses :ref:`WP_FAIL2BAN_AUTH_LOG` instead.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for logging pingbacks and trackbacks.
    */
   define('WP_FAIL2BAN_PINGBACK_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_PINGBACKS`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 2.2.0
