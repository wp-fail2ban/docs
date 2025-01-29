.. _WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS
---------------------------------

.. rubric:: Enable SQL injection detection for WordPress core.
.. include:: default-disabled.rst
.. include:: premium-only.rst

.. versionadded:: 5.1.0

----

Enables SQL injection detection for database queries made by WordPress core. This is a testing feature and should not be enabled in production without good reason.

.. code-block:: php
   :caption: Example: Enable WordPress core SQLi detection

   /**
    * Enable SQL injection detection for WordPress core
    */
   define('WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS', true);

.. warning::
   Do not enable this in normal operation without good technical justification.

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_WAF`
   * :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS`
