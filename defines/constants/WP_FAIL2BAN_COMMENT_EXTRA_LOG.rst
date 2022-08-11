.. _WP_FAIL2BAN_COMMENT_EXTRA_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_COMMENT_EXTRA_LOG
-----------------------------

.. versionadded:: 4.0.5

----

The facility to use for logging extra information about comment events.

.. code-block:: php

    define('WP_FAIL2BAN_COMMENT_EXTRA_LOG', LOG_LOCAL5);

**Default:** ``LOG_AUTH``

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`
   * :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
