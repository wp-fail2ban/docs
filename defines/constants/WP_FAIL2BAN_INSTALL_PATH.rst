.. _WP_FAIL2BAN_INSTALL_PATH:

WP_FAIL2BAN_INSTALL_PATH
------------------------

.. versionadded:: 5.0.0

The path to the ``fail2ban`` install.

The Site Health tool looks in the following locations:

  * ``/etc/fail2ban``
  * ``/usr/local/etc/fail2ban``

If your ``fail2ban`` install lives elsewhere you should define it in ``wp-config.php``:

.. code-block:: php

  define('WP_FAIL2BAN_INSTALL_PATH', '/var/fail2ban');

