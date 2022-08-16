.. _WP_FAIL2BAN_LOG_COMMENTS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_COMMENTS
------------------------

.. rubric:: Log submitted comments.
.. include:: default-disabled.rst

.. versionadded:: 3.5.0

----

.. code-block:: php

   /**
    * Log submitted comments.
    */
   define('WP_FAIL2BAN_LOG_COMMENTS', true);

The comment ID and IP will be written to :ref:`WP_FAIL2BAN_COMMENT_LOG` and matched by :ref:`wordpress-extra_conf`.

.. seealso::
   * :ref:`WP_FAIL2BAN_COMMENT_LOG`

