.. _WP_FAIL2BAN_HTTP_HOST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_HTTP_HOST
---------------------

.. rubric:: Override HTTP host detection.
.. include:: default-disabled.rst.inc

----

Forces WPf2b to use a specific hostname instead of the detected HTTP host. This can be useful in multisite configurations or when the detected host doesn't match the expected value.

.. code-block:: php
   :caption: Example: Set specific hostname

   /**
    * Override HTTP host detection
    */
   define('WP_FAIL2BAN_HTTP_HOST', 'example.com');

.. note::
   This affects logging only; it does not change WordPress's behavior.

.. rubric:: History
.. versionadded:: 3.0.0