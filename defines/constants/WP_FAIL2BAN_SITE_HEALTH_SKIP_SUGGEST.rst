.. _WP_FAIL2BAN_SITE_HEALTH_SKIP_SUGGEST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SITE_HEALTH_SKIP_SUGGEST
------------------------------------

.. rubric:: Skip suggestions during Health Check.
.. versionadded:: 5.2.1

.. include:: default-disabled.rst
.. include:: type-assoc-array.rst
----

Disables various suggestions in the Site Health tool.

.. list-table::
   :widths: 1, 9
   :header-rows: 1

   * - Key
     - Value
     
   * - addon
     - .. parsed-literal::

          [ <*slug*> => <*boolean*>, ... ]

       Slugs
         * wpf2b-addon-blocklist
         * wp-fail2ban-addon-contact-form-7
         * wp-fail2ban-addon-gravity-forms

.. code-block:: php
   :caption: Example: Do not suggest add-on for Gravity Forms

   /**
    * Do not suggest add-on for Gravity Forms
    */
   define('WP_FAIL2BAN_SITE_HEALTH_SKIP_SUGGEST', [
     'addon' => [
       'wp-fail2ban-addon-gravity-forms' => true
     ]
   ]);

