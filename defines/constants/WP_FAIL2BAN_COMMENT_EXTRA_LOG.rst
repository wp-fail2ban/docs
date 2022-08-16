.. _WP_FAIL2BAN_COMMENT_EXTRA_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_COMMENT_EXTRA_LOG
-----------------------------

.. rubric:: Facility for extra comment events.
.. include:: default-log_auth.rst

.. versionadded:: 4.0.5
.. versionchanged:: 4.4.0
   Uses :ref:`WP_FAIL2BAN_USE_AUTHPRIV`

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL5

    /**
     * Facility for extra comment events.
     */
    define('WP_FAIL2BAN_COMMENT_EXTRA_LOG', LOG_LOCAL5);

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
