.. _WP_FAIL2BAN_EX_WAF_UPDATE_OPTION:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_UPDATE_OPTION
--------------------------------

.. rubric:: Enable capability checking for option updates.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Checks updates to WordPress core options. Users need ``manage_options``, or ``manage_network_options`` on multisite, to change a protected option.

``all``
   Protect all listed core options.

``theme``
   Protect the same options, but allow recognised image-size changes during ``after_theme_setup``.

``disabled``
   Do not check option updates.

.. code-block:: php
   :caption: Example: Protect options while allowing theme setup

   /**
    * Protect core options while allowing recognised theme setup changes.
    */
   define('WP_FAIL2BAN_EX_WAF_UPDATE_OPTION', 'theme');

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_WAF`

.. rubric:: History
.. versionadded:: 5.1.0
