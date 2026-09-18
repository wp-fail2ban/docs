.. _WP_FAIL2BAN_EX_GEOLOCATION_FAIL:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_GEOLOCATION_FAIL
-------------------------------

.. rubric:: Deny requests when a country cannot be resolved.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, country blocking fails closed: a request whose country cannot be resolved is denied with HTTP 403 once a country block list is in use. Omitting or spoofing geolocation therefore cannot bypass the list.

When disabled (the default), country blocking fails open: a configured country list does not apply to a request whose country cannot be resolved.

This setting has no effect when :ref:`WP_FAIL2BAN_EX_GEOLOCATION` is ``disabled``, or when both country lists are empty. A resolved country that is not on either list is still allowed.

A fail-closed denial records :ref:`WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN`. It does not invent a country code for other Premium events; those keep a null ISO value.

.. code-block:: php
   :caption: Example: Deny unresolved countries when a block list is configured

   define('WP_FAIL2BAN_EX_GEOLOCATION_FAIL', true);

.. seealso::
   * :ref:`feature-country-blocking`
   * :ref:`WP_FAIL2BAN_EX_GEOLOCATION`
   * :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES`
   * :ref:`WPF2B_EVENT_BLOCK_COUNTRY_UNKNOWN`

.. rubric:: History
.. versionadded:: 6.3.0
