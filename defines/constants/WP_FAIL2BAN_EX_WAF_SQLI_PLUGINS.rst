.. _WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS
-------------------------------

.. rubric:: Check plugin queries for SQLi.
.. include:: default-disabled.rst
.. include:: premium-only.rst

.. versionadded:: 5.1.0

----


.. code-block:: php
   :caption: Example: Enabling SQLi detection for plugins

   /**
    * WAF: check plugin queries for SQLi.
    */
   define('WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS', true);
