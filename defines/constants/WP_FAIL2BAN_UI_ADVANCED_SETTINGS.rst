.. _WP_FAIL2BAN_UI_ADVANCED_SETTINGS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_UI_ADVANCED_SETTINGS
--------------------------------

.. rubric:: Show/hide advanced settings in the UI.
.. include:: default-not-set.rst

----

.. note::
   If this constant is defined the UI toggle will be hidden.

.. code-block:: php
   :caption: Example: Show Quick-Start

   /**
    * Hide advanced settings in the UI.
    */
   define('WP_FAIL2BAN_UI_ADVANCED_SETTINGS', false);

.. include:: must-use-wp-config.rst

.. rubric:: History
.. versionadded:: 6.0.0