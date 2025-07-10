.. _WP_FAIL2BAN_SYSLOG_INLINE_HOST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SYSLOG_INLINE_HOST
------------------------------

.. rubric:: Log hostname in message body.
.. include:: default-false.rst

.. versionadded:: 6.0.0
  
----

.. admonition:: systemd
  
   You should enable this if your OS uses **systemd**.

Moves the hostname from the syslog identifier to the message body. For example:

.. code-block:: none
  :caption: define('WP_FAIL2BAN_SYSLOG_INLINE_HOST', true);

   Jul  7 12:34:56 bistromath wordpress[4242]: Blocked authentication attempt on fqdn.example.com for Agrajag from 192.0.42.1

instead of:

.. code-block:: none
  :caption: define('WP_FAIL2BAN_SYSLOG_INLINE_HOST', false);

   Jul  7 12:34:56 bistromath wordpress(fqdn.example.com)[4242]: Blocked authentication attempt for Agrajag from 192.0.42.1

.. seealso::
   | :ref:``
   | :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG`
