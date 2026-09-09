.. _configuration__site-health-tool:

Site Health Tool
----------------

.. versionadded:: 5.0.0

----

WP fail2ban uses the standard WordPress Site Health tool to check things are configured correctly.

Checking ``fail2ban``
^^^^^^^^^^^^^^^^^^^^^

The checks need PHP to read the fail2ban installation and its installed filters.

Running PHP with ``chroot``
"""""""""""""""""""""""""""

PHP cannot inspect fail2ban files outside its ``chroot``. Either expose the fail2ban directory inside the ``chroot`` and set :ref:`WP_FAIL2BAN_INSTALL_PATH`, or disable the filter checks in ``wp-config.php``:

.. code-block:: php

  define('WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS', true);

.. seealso::
  :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS`

Non-Standard Install Path for ``fail2ban``
""""""""""""""""""""""""""""""""""""""""""

If fail2ban is installed somewhere other than ``/etc/fail2ban`` or ``/usr/local/etc/fail2ban``, set its directory in ``wp-config.php``:

.. code-block:: php

  /** 
   * Be sure to change the path to point to your fail2ban install
   */
  define('WP_FAIL2BAN_INSTALL_PATH', '/var/fail2ban');

Other Reasons
"""""""""""""

Filesystem permissions, ``open_basedir``, and SELinux policy can also prevent PHP reading the fail2ban filters. Grant only the read access appropriate for the host, or disable the filter checks with :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS`.
