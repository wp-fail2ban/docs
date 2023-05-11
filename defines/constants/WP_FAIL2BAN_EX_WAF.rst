.. _WP_FAIL2BAN_EX_WAF:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF
------------------

.. rubric:: Control the state of the WAF.
.. include:: default-disabled.rst
.. include:: premium-only.rst
  
.. versionadded:: 5.1.0

----

The state can be one of:

on
  Enabled; blocks detected threats.

off
  Disabled.

logging
  Detects and logs threats.

.. code-block:: php
   :caption: Example: Enabling logging only

   /**
    * WAF state.
    */
   define('WP_FAIL2BAN_EX_WAF', 'logging');
