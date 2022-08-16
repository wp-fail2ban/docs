.. _WP_FAIL2BAN_LOG_SPAM:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_SPAM
--------------------

.. rubric:: Log comments marked as spam.
.. include:: default-disabled.rst

.. versionadded:: 3.5.0

----

.. code-block:: php

   /**
    * Log spam comments.
    */
   define('WP_FAIL2BAN_LOG_SPAM', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_SPAM_LOG` and matched by :ref:`wordpress-hard_conf`.

.. seealso::
   * :ref:`WP_FAIL2BAN_SPAM_LOG`

