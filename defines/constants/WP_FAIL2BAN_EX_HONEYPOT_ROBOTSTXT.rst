.. _WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT
---------------------------------

.. rubric:: Enable honeypot for robots.txt.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When :ref:`WP_FAIL2BAN_EX_HONEYPOT` is also enabled, adds one ``Disallow`` line
per configured trap path to WordPress's virtual ``robots.txt`` output. WordPress
publishes those lines only when the site is public. The request matcher remains
active on a non-public site even though the bait lines are absent.

.. code-block:: php
   :caption: Example: Enable honeypot for robots.txt

   define('WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_HONEYPOT`
   * :ref:`WP_FAIL2BAN_EX_HONEYPOT_LOG`
   * :ref:`WPF2B_EVENT_HONEYPOT_TRAP_ROBOTSTXT`

.. rubric:: History
.. versionadded:: 6.0.0
