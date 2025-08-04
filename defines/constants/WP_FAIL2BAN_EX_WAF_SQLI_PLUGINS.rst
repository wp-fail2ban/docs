.. _WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS
-------------------------------

.. rubric:: Enable SQL injection detection for plugins.
.. include:: default-disabled.rst
.. include:: premium-only.rst

----

Enables SQL injection detection for database queries made by plugins.

.. code-block:: php
   :caption: Example: Enable plugin SQLi detection

   /**
    * Enable SQL injection detection for plugins
    */
   define('WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_WAF`
   * :ref:`WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS`

.. rubric:: History
.. versionadded:: 5.1.0