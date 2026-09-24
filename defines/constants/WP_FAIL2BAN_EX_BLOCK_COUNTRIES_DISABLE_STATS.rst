.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS
--------------------------------------------

.. rubric:: Disable country-block counters.
.. include:: default-false.rst.inc
.. include:: premium-only.rst.inc

----

By default, each country-block denial updates lightweight counters stored in a
site option. On multisite it also updates a separate network-wide aggregate.
These updates are best-effort: concurrent requests can overwrite increments,
so the counts are operational summaries rather than an exact audit record.

Defining this constant as ``true`` stops collection. Denials still return the
usual HTTP status, write the usual syslog message, and record the Premium event;
only the counters are skipped.

The site dashboard reads site counters; the network dashboard reads the network
aggregate. The widget is not registered when both country lists are empty, and
its Premium plan requirement is Bronze or higher on single-site and Silver or
higher on multisite. Its known-country 403 bucket excludes unresolved-country
fail-closed responses, which have their own unknown-country bucket.

.. code-block:: php
   :caption: Example: Disable country-block counters

   /**
    * Disable country-block counters
    */
   define('WP_FAIL2BAN_EX_BLOCK_COUNTRIES_DISABLE_STATS', true);

.. seealso::
   * :ref:`feature-country-blocking`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451`

.. rubric:: History
.. versionadded:: 6.3.0
