.. _WP_FAIL2BAN_REMOTE_ADDR:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_REMOTE_ADDR
-----------------------

.. rubric:: IP address to use for anonymised requests.
.. include:: default-disabled.rst

.. versionadded:: 3.6.0
.. versionchanged::5.0.0
   Added IPv6 support.

Some themes and plugins anonymise requests; I'm sure there's a good reason.

.. code-block:: php

   /*
    * IP address to use for anonymised requests.
    */
   define('WP_FAIL2BAN_REMOTE_ADDR', '172.16.123.123');

.. include:: must-use-wp-config.rst
