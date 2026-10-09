.. _WP_FAIL2BAN_LOG_PASSWORD_REQUEST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_PASSWORD_REQUEST
--------------------------------

.. rubric:: Log password reset requests.
.. include:: default-disabled.rst.inc

----

Logs accepted and rejected password-reset requests. An accepted request for a
recognised account produces :ref:`WPF2B_EVENT_PASSWORD_REQUEST`; a rejected
request produces :ref:`WPF2B_EVENT_PASSWORD_REQUEST_FAIL`. Both use
:ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`.

The accepted event means WordPress recognised the account and accepted a valid
reset request. Reset-key storage, mail generation and delivery, and the eventual
password change happen later and are not reported by this event.
The rejected event can contain a submitted username that does not identify an
account. Defining the setting as ``false`` suppresses both messages and events.

.. code-block:: php
   :caption: Example: Enable password reset request logging

   /**
    * Log password reset requests.
    */
   define('WP_FAIL2BAN_LOG_PASSWORD_REQUEST', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`
   * :ref:`feature-password-reset`

.. rubric:: History
.. versionadded:: 3.5.0
