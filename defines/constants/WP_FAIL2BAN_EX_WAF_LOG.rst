.. _WP_FAIL2BAN_EX_WAF_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_LOG
----------------------

.. rubric:: Facility for :ref:`WAF class <events_WAF>` events.
.. include:: default-log_auth.rst.inc
.. include:: premium-only.rst.inc

----

Specifies the syslog facility to use when logging Web Application Firewall events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

   /**
    * Facility for WAF events.
    */
   define('WP_FAIL2BAN_EX_WAF_LOG', LOG_LOCAL5);

.. seealso::
   * :ref:`events_WAF`
   * :ref:`facilities`

.. rubric:: History
.. versionchanged:: 6.0.0
   Changed default facility to :ref:`LOG_AUTH <facilities>`.
.. versionadded:: 5.1.0