.. _WP_FAIL2BAN_SPAM_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SPAM_LOG
--------------------

.. rubric:: Facility for :ref:`Spam class <events_SPAM>` events.
.. include:: default-log_auth.rst

.. versionadded:: 4.0.0
.. versionchanged:: 4.4.0
   Uses :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL4

   /*
    * Facility for Spam class events.
    */
   define('WP_FAIL2BAN_SPAM_LOG', LOG_LOCAL4);

.. seealso::
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
   * :ref:`events_SPAM`
