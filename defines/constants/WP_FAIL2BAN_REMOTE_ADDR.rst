.. _WP_FAIL2BAN_REMOTE_ADDR:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_REMOTE_ADDR
-----------------------

.. rubric:: IP address to use for anonymised requests.
.. include:: default-disabled.rst

----

Some themes and plugins anonymise requests by clearing the remote IP address. This constant allows you to specify a fixed IP address to use in these cases.

.. code-block:: php
   :caption: Example: Set fixed IP for anonymised requests

   /**
    * IP address to use for anonymised requests
    */
   define('WP_FAIL2BAN_REMOTE_ADDR', '172.16.123.123');

.. include:: must-use-wp-config.rst

.. rubric:: History
.. versionchanged::5.0.0
   Added IPv6 support.
.. versionadded:: 3.6.0