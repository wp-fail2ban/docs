.. _WP_FAIL2BAN_COMMENT_LOG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_COMMENT_LOG
-----------------------

.. rubric:: Facility for :ref:`Comment class <events_COMMENT>` events.
.. include:: default-log_user.rst

.. versionadded:: 3.5.0

----

.. code-block:: php
   :caption: Example: Using LOG_LOCAL3

   /**
    * Facility for Comment events.
    */
   define('WP_FAIL2BAN_COMMENT_LOG', LOG_LOCAL3);

.. seealso::
   * :ref:`WP_FAIL2BAN_LOG_COMMENTS`
   * :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`
   * :ref:`facilities`
