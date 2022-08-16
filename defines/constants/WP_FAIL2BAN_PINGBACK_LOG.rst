.. _WP_FAIL2BAN_PINGBACK_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PINGBACK_LOG
------------------------

.. rubric:: Facility for logging pingbacks.
.. include:: default-log_user.rst

.. versionadded:: 2.2.0

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for logging pingbacks.
    */
   define('WP_FAIL2BAN_PINGBACK_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_PINGBACKS`
   * :ref:`facilities`
