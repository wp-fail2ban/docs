.. _WP_FAIL2BAN_LOG_PASSWORD_REQUEST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_PASSWORD_REQUEST
--------------------------------

.. rubric:: Log password reset requests.
.. include:: default-disabled.rst.inc

----

Enables password-reset request evidence. When enabled, an accepted request for
a recognised account produces :ref:`WPF2B_EVENT_PASSWORD_REQUEST`; a rejected
request produces :ref:`WPF2B_EVENT_PASSWORD_REQUEST_FAIL`. Both use
:ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`.

The accepted event means WordPress recognised the account and accepted the
request far enough to provide the security signal. It does not prove that a
reset key was stored, mail was sent or delivered, or the password was changed.
The rejected event can contain a submitted username that does not identify an
account. Defining the setting as ``false`` suppresses both outcomes.

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
