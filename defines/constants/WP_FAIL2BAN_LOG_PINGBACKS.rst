.. _WP_FAIL2BAN_LOG_PINGBACKS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_PINGBACKS
-------------------------

.. rubric:: Log pingbacks.
.. include:: default-disabled.rst

----

Enables logging of XML-RPC pingback requests. When enabled, pingback events will be written to the syslog facility specified by :ref:`WP_FAIL2BAN_PINGBACK_LOG`.

.. code-block:: php
   :caption: Example: Enable pingback logging

   /**
    * Log pingbacks.
    */
   define('WP_FAIL2BAN_LOG_PINGBACKS', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PINGBACK_LOG`

.. rubric:: History
.. versionadded:: 2.2.0
   Based on a suggestion from *@maghe*.