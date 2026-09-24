.. _WP_FAIL2BAN_EX_WAF_UPDATE_OPTION:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_UPDATE_OPTION
--------------------------------

.. rubric:: Enable capability checking for option updates.
.. rubric:: Default setting: ``all``
.. include:: premium-only.rst.inc

----

Checks updates to WordPress core options. Users need ``manage_options``, or ``manage_network_options`` on multisite, to change a protected option.
The global WAF state is separately disabled by default; this individual default
applies when WAF is enabled or set to logging.

``all``
   Protect all listed core options.

``theme``
   Protect the same options, but allow recognised image-size changes during
   WordPress's ``after_setup_theme`` lifecycle action.

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
