.. _WP_FAIL2BAN_EX_HONEYPOT_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_HONEYPOT_LOG
----------------------------

.. rubric:: Facility for :ref:`Honeypot class <events_HONEYPOT>` events.
.. include:: default-log_auth.rst.inc
.. include:: premium-only.rst.inc

----

Specifies the syslog facility to use when logging Honeypot events.

.. code-block:: php
   :caption: Example: Using LOG_LOCAL4

   /**
    * Facility for Honeypot class events.
    */
   define( 'WP_FAIL2BAN_EX_HONEYPOT_LOG', LOG_LOCAL4 );

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_HONEYPOT`
   * :ref:`facilities`

.. rubric:: History
.. versionadded:: 6.0.0