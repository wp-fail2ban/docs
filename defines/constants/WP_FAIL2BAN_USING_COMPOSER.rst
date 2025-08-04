.. _WP_FAIL2BAN_USING_COMPOSER:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_USING_COMPOSER
--------------------------

.. rubric:: Configure Composer installation detection.
.. include:: default-false.rst

----

Controls how WPf2b detects if it was installed via Composer. By default, WPf2b searches for composer.json in standard locations:

* ``WP_PLUGIN_DIR`` (usually ``wp-content/plugins``)
* ``WP_CONTENT_DIR`` (usually ``wp-content``)
* ``ABSPATH`` (the root of your WordPress installation)
* ``ABSPATH/../`` (one level up from the root of your WordPress installation)

You can either specify a path to composer.json or explicitly enable Composer mode:

.. code-block:: php
   :caption: Example: Set absolute path to composer.json

   /**
    * Specify composer.json location with absolute path
    */
   define('WP_FAIL2BAN_USING_COMPOSER', '/path/to/composer.json');

.. code-block:: php
   :caption: Example: Set path relative to WordPress root

   /**
    * Specify composer.json location relative to ABSPATH
    */
   define('WP_FAIL2BAN_USING_COMPOSER', 'relative/path/to/composer.json');

.. code-block:: php
   :caption: Example: Enable Composer mode

   /**
    * Enable Composer mode
    */
   define('WP_FAIL2BAN_USING_COMPOSER', true);

.. note::
   Specifying the path to composer.json is preferred as it provides more information about your installation.

.. rubric:: History
.. versionadded:: 5.4.0