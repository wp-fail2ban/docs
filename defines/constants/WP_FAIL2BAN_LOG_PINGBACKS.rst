.. _WP_FAIL2BAN_LOG_PINGBACKS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_PINGBACKS
-------------------------

.. rubric:: Log pingbacks and trackbacks.
.. include:: default-disabled.rst.inc

----

Logs ordinary XML-RPC pingbacks and WordPress trackbacks. Both use
:ref:`WP_FAIL2BAN_PINGBACK_LOG`. Setting the constant to ``false`` disables
the ordinary accepted and rejected messages for both request types.

The one-pingback-per-XML-RPC-request limit is independent of this setting. On a
second ``pingback.ping`` call, |WPf2b| returns a per-call fault and records
:ref:`WPF2B_EVENT_XMLRPC_PINGBACK_MULTI` once for the request. The message text
and shipped-filter match differ according to whether ordinary pingback logging
is enabled.

.. code-block:: php
   :caption: Example: Enable pingback logging

   /**
    * Log pingbacks and trackbacks.
    */
   define('WP_FAIL2BAN_LOG_PINGBACKS', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PINGBACK_LOG`

.. rubric:: History
.. versionadded:: 2.2.0
   Based on a suggestion from *@maghe*.
