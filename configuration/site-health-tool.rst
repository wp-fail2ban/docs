.. _configuration__site-health-tool:

Site Health Tool
----------------

.. versionadded:: 5.0.0

----

WP fail2ban uses the standard WordPress Site Health tool to check things are configured correctly.

Checking ``fail2ban``
^^^^^^^^^^^^^^^^^^^^^

This works well for typical installations, but there are two things to note:

Running PHP with ``chroot``
"""""""""""""""""""""""""""

PHP will not be able to access files outside the ``chroot``, so the health checks will not work.

If you **really** want them to work, you could ensure the ``chroot`` includes the parent directory of the document root (you may already have done this and moved ``wp-config.php`` outside the document root), and then use ``nullfs`` to mount the ``fail2ban`` install into the ``chroot`` above the document root. You will then need to tell WP fail2ban where to find your ``fail2ban`` install (see below).

Most people will simply disable the checks by adding this to ``wp-config.php``

.. code-block:: php

  define('WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS', true);

.. seealso::
  :ref:`WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS`

Non-Standard Install Path for ``fail2ban``
""""""""""""""""""""""""""""""""""""""""""

If your ``fail2ban`` install lives somewhere other than ``/etc/fail2ban`` or ``/usr/local/etc/fail2ban`` you will need to tell WP fail2ban where to find it by adding something like this to ``wp-config.php``

.. code-block:: php

  /** 
   * Be sure to change the path to point to your fail2ban install
   */
  define('WP_FAIL2BAN_INSTALL_PATH', '/var/fail2ban');

Other Reasons
"""""""""""""

There are, of course, many other reasons why PHP won't be able to read the ``fail2ban`` filter files, e.g. tighter ``chmod``, SELinux.

If you have a way to allow the health checks to run in any of these situations and think it may help others, please either write it up and submit a PR, or get in touch on the forums.
