.. _WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS
------------------------------------

.. rubric:: Ignore filter files during Health Check.
.. versionadded:: 5.0.0

.. include:: default-disabled.rst
----

*WPf2b* uses the WordPress Site Heath tool to check for :ref:`obsolete<configuration__fail2ban__updating>` and :ref:`modified<configuration__fail2ban__custom-filters>` filter files.

However, this test will not work with many server configurations, e.g. if PHP is using ``chroot``. In that case you should disable these checks to give you cleaner output from the Site Health tool (they're otherwise harmless).

In ``wp-config.php``:

.. code-block:: php

   /*
    * Ignore filter files during Health Check.
    */
   define('WP_FAIL2BAN_SITE_HEALTH_SKIP_FILTERS', true);

.. warning::
  **It is your responsibility to ensure your filters are kept current.**
