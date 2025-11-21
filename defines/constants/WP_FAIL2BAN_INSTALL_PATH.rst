.. _WP_FAIL2BAN_INSTALL_PATH:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_INSTALL_PATH
------------------------

.. rubric:: Override fail2ban installation path.
.. include:: default-disabled.rst.inc

----

The path to the ``fail2ban`` installation. The Site Health tool looks in the following locations:

* ``/etc/fail2ban``
* ``/usr/local/etc/fail2ban``

If your ``fail2ban`` installation is elsewhere, you can specify the path:

.. code-block:: php
   :caption: Example: Set custom fail2ban path

   /**
    * Set custom fail2ban installation path
    */
   define('WP_FAIL2BAN_INSTALL_PATH', '/var/fail2ban');

.. rubric:: History
.. versionadded:: 5.0.0