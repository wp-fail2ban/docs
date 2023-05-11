.. _WP_FAIL2BAN_EX_WAF_LOG:

WP_FAIL2BAN_EX_WAF_LOG
----------------------

.. rubric:: Facility for :ref:`WAF class <events_WAF>` events.
.. include:: default-log_user.rst
.. rubric:: Premium Only

.. versionadded:: 5.1.0

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

   /**
    * Facility for WAF events.
    */
   define('WP_FAIL2BAN_EX_WAF_LOG', LOG_LOCAL5);
