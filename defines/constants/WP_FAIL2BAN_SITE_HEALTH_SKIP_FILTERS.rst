.. _WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS
------------------------------------

.. rubric:: Skip filter file checks in Site Health.
.. include:: default-disabled.rst

.. versionadded:: 5.0.0

----

Disables the Site Health tool's checks of fail2ban filter files. This setting is required if PHP is running in a chroot environment where it cannot access the fail2ban configuration files.

It can also be useful if you maintain your own filter files and don't want warnings about differences from the standard files.

.. code-block:: php
   :caption: Example: Skip filter checks

   /**
    * Skip filter file checks
    */
   define('WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS', true);

.. warning::
   It is your responsibility to ensure your filters are kept current.
