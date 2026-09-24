.. _WP_FAIL2BAN_EX_HONEYPOT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_HONEYPOT
-----------------------

.. rubric:: Enable honeypot.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Enables matching of configured honeypot request paths. Publishing the built-in
trap paths in virtual ``robots.txt`` also requires
:ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT` and WordPress's public-site setting.
On a non-public site the matcher can remain active while the bait lines are not
published.

.. code-block:: php
   :caption: Example: Enable honeypot

   define('WP_FAIL2BAN_EX_HONEYPOT', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT`
   * :ref:`WP_FAIL2BAN_EX_HONEYPOT_LOG`

.. rubric:: History
.. versionadded:: 6.0.0
