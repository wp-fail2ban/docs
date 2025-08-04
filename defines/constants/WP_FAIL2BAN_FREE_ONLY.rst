.. _WP_FAIL2BAN_FREE_ONLY:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_FREE_ONLY
---------------------

.. rubric:: Disable premium notifications.
.. include:: default-false.rst

----

Prevents the Freemius library from displaying admin notices and other notifications about premium features.

.. code-block:: php
   :caption: Example: Disable premium notifications

   /**
    * Disable premium notifications
    */
   define('WP_FAIL2BAN_FREE_ONLY', true);

.. rubric:: History
.. versionadded:: 4.4.0