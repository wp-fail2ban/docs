.. _WP_FAIL2BAN_EX_WAF:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF
------------------

.. rubric:: Enable Web Application Firewall.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Enables the Web Application Firewall (WAF) functionality. The WAF can operate in three modes:

+----------+--------------------------------------------------+
| Mode     | Description                                      |
+==========+==================================================+
| on       | Full protection: blocks and logs threats         |
+----------+--------------------------------------------------+
| logging  | Detection only: logs threats but does not block  |
+----------+--------------------------------------------------+
| off      | Disabled: no detection or blocking               |
+----------+--------------------------------------------------+

.. code-block:: php
   :caption: Example: Enable WAF in logging mode

   /**
    * Enable WAF in logging mode
    */
   define('WP_FAIL2BAN_EX_WAF', 'logging');

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_WAF_LOG`
   * :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS`
   * :ref:`WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS`

.. rubric:: History
.. versionadded:: 5.1.0