.. _WP_FAIL2BAN_LOG_PASSWORD_REQUEST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_PASSWORD_REQUEST
--------------------------------

.. rubric:: Log password reset requests.
.. include:: default-disabled.rst

.. versionadded:: 3.5.0

----

Enables logging of password reset requests. When enabled, the username and IP address will be written to the syslog facility specified by :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`.

.. code-block:: php
   :caption: Example: Enable password reset request logging

   /**
    * Log password reset requests.
    */
   define('WP_FAIL2BAN_LOG_PASSWORD_REQUEST', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG`
   * :ref:`wordpress-extra_conf`
