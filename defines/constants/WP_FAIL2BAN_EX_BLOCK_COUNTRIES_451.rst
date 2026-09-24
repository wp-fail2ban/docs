.. _WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451
----------------------------------

.. rubric:: Block requests from specified countries with a 451 status code.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Returns HTTP 451 "Unavailable For Legal Reasons" for requests whose resolved
country appears in this list.

Do not put the same country in this list and
:ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`. If an overlap exists despite that
recommendation, the HTTP 403 list takes precedence, so the 403 event and
response are used.

The message is deliberately neutral:

   The administrator of this site has blocked access from your country.

.. code-block:: php
   :caption: Example: Block requests from specific countries

   /**
    * Block requests from specified countries
    */
   define('WP_FAIL2BAN_EX_BLOCK_COUNTRIES_451', [
       'FR',
       'GB'
   ]);

.. note::
   Country codes must be specified using ISO 3166-1 alpha-2 format.

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`

.. rubric:: History
.. versionadded:: 6.0.0
