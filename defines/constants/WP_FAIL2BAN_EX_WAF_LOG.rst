.. _WP_FAIL2BAN_EX_WAF_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_LOG
----------------------

.. rubric:: Facility for :ref:`WAF class <events_WAF>` events.
.. include:: default-log_user.rst
.. include:: premium-only.rst

.. versionadded:: 5.1.0

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
