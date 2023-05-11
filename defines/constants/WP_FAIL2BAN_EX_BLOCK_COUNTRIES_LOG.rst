.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG:

WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG
----------------------------------

.. rubric:: Facility for :ref:`blocked country event <WPF2B_EVENT_BLOCK_COUNTRY>`
.. include:: default-log_user.rst
.. include:: premium-only.rst

.. versionadded:: 4.3.2.0

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL2

   /**
    * Facility for blocked country event.
    */
   define('WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG', LOG_LOCAL2);
