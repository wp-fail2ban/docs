.. _WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT
---------------------------------

.. rubric:: Enable honeypot for robots.txt.
.. include:: default-disabled.rst
.. include:: premium-only.rst

.. versionadded:: 6.0.0

----

Adds honeypot entries to the ``robots.txt`` file.

.. code-block:: php
   :caption: Example: Enable honeypot for robots.txt

   define('WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_HONEYPOT`
   * :ref:`WP_FAIL2BAN_EX_HONEYPOT_LOG`
   * :ref:`WPF2B_EVENT_HONEYPOT_TRAP_ROBOTSTXT`