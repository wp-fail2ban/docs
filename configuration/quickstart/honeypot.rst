.. _quickstart_honeypot:

Honeypot
========

**Edition:** Premium. Experimental.

Selecting the card enables a trap-path matcher and publication of those paths as ``Disallow`` entries in WordPress's ``robots.txt`` on a public site. Requests to a trap path are treated as hard failures. On a site marked non-public, the matcher can still act even though WordPress does not publish the bait lines.

Its trap paths must not serve real content.

Bundle settings
---------------

.. list-table::
   :header-rows: 1
   :widths: 75 25

   * - Setting
     - Value applied
   * - :ref:`WP_FAIL2BAN_EX_HONEYPOT`
     - ``true``
   * - :ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT`
     - ``true``

The individual controls are on the Honeypot tab in Advanced settings.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-honeypot.rst

.. seealso::
   :ref:`feature-honeypot`
