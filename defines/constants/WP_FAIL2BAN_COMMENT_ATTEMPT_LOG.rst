.. _WP_FAIL2BAN_COMMENT_ATTEMPT_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_COMMENT_ATTEMPT_LOG
-------------------------------

.. rubric:: Facility for attempted comment events.
.. include:: default-log_auth.rst

.. versionadded:: 5.0.0

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

    /**
     * Facility for attempted comment events.
     */
    define('WP_FAIL2BAN_COMMENT_ATTEMPT_LOG', LOG_LOCAL5);

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_COMMENT_ATTEMPTS`
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
