.. _WP_FAIL2BAN_EX_IGNORE_IPS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_IGNORE_IPS
-------------------------

.. rubric:: Ignore specific IPs.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Specifies a list of IPs to ignore. Matching is against the **resolved client IP**. A match short-circuits the **entire** Free and Premium chain: ``Init`` returns false, so nothing is logged, blocked, or stored for that request.

.. code-block:: php
   :caption: Example: Ignore specific IPs

   /**
    * Ignore specific IPs
    */
   define('WP_FAIL2BAN_EX_IGNORE_IPS', [
       '192.168.0.42',
       '192.168.42.0/24'
   ]);