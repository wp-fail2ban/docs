.. _WP_FAIL2BAN_EX_WAF_UPDATE_OPTION:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_UPDATE_OPTION
--------------------------------

.. rubric:: Enable capability checking for option updates.
.. include:: default-disabled.rst
.. include:: premium-only.rst
  
.. versionadded:: 5.1.0

----

Enables capability checking when WordPress core options are updated. When enabled, verifies that the current user has the appropriate capabilities (update_options or update_network_options) before allowing changes to core options.

.. code-block:: php
   :caption: Example: Enable option update capability checking

   /**
    * Enable capability checking for option updates
    */
   define('WP_FAIL2BAN_EX_WAF_UPDATE_OPTION', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_WAF`
