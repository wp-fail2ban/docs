.. _WP_FAIL2BAN_EX_IGNORE_IPS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_IGNORE_IPS
-------------------------

.. rubric:: Ignore specific IPs.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Specifies addresses or networks to ignore. Matching uses the resolved client
address. A match suppresses core Free and Premium feature logging, blocking,
event storage, and WAF checks for the request. Third-party integrations using
the public plugin-message API are outside this core guarantee and can still run.

.. code-block:: php
   :caption: Example: Ignore specific IPs

   /**
    * Ignore specific IPs
    */
   define('WP_FAIL2BAN_EX_IGNORE_IPS', [
       '192.168.0.42',
       '192.168.42.0/24'
   ]);
