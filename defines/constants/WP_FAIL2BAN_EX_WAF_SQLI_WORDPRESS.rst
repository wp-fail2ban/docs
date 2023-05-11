.. _WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS
---------------------------------

.. rubric:: Check WordPress core queries for SQLi.
.. include:: default-disabled.rst
.. include:: premium-only.rst
  
.. versionadded:: 5.1.0

----

.. note::
   This setting exists for testing; it is published for completeness.

.. code-block:: php
   :caption: Example: Enabling SQLi detection for WordPress core

   /**
    * WAF: check WordPress core queries for SQLi.
    */
   define('WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS', true);

.. warning::
   Do not enable this in normal operation without good technical justification.
