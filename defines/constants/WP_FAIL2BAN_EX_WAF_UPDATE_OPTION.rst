.. _WP_FAIL2BAN_EX_WAF_UPDATE_OPTION:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_UPDATE_OPTION
--------------------------------

.. rubric:: Check that current user may update core WordPress options.
.. include:: default-disabled.rst
.. include:: premium-only.rst
  
.. versionadded:: 5.1.0

----

When a plugin tries to update a core WordPress option, check the current user has ``update_options`` or ``update_network_options`` capabilities.

.. code-block:: php
   :caption: Example: Enabling caps checking for update_option() on core WordPress options.

   /**
    * WAF: check caps for update_option().
    */
   define('WP_FAIL2BAN_EX_WAF_UPDATE_OPTION', true);
