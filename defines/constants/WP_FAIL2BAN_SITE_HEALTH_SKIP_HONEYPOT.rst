.. _WP_FAIL2BAN_SITE_HEALTH_SKIP_HONEYPOT:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SITE_HEALTH_SKIP_HONEYPOT
-------------------------------------

.. rubric:: Skip hard-coded honeypot path checks in Site Health.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Disables the Site Health warning that reports occupied hard-coded honeypot trap
paths. Those paths are deliberate bait, so an occupant can be intentional, for
example another honeypot.

This constant does not suppress the warning that the generated trap-path set is
short after a colliding path has been dropped. See :ref:`feature-honeypot`.

.. code-block:: php
   :caption: Example: Skip hard-coded honeypot path checks

   /**
    * Skip hard-coded honeypot path checks
    */
   define('WP_FAIL2BAN_SITE_HEALTH_SKIP_HONEYPOT', true);

.. seealso::
   * :ref:`feature-honeypot`
   * :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS`
   * :ref:`operating_site_health`

.. rubric:: History
.. versionadded:: 6.3.0
