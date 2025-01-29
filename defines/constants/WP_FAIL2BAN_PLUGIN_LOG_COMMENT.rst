.. _WP_FAIL2BAN_PLUGIN_LOG_COMMENT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_PLUGIN_LOG_COMMENT
------------------------------

.. rubric:: Enable logging plugin :ref:`"Comment" class <events_COMMENT>` events.
.. include:: default-disabled.rst

.. versionadded:: 4.2.0

----

Enables logging of comment events from plugins.

.. code-block:: php
   :caption: Example: Enable plugin comment logging

   /**
    * Enable logging plugin "Comment" class events.
    */
   define('WP_FAIL2BAN_PLUGIN_LOG_COMMENT', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PLUGIN_COMMENT_LOG`
