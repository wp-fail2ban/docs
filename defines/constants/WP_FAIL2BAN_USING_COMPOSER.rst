.. _WP_FAIL2BAN_USING_COMPOSER:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_USING_COMPOSER
--------------------------

.. rubric:: Whether WPf2b is installed via Composer.
.. include:: default-false.rst

.. versionadded:: 5.4.0

----

*WPf2b* looks for a ``composer.json`` file in the following directories:

* ``WP_PLUGIN_DIR`` (usually ``wp-content/plugins``)
* ``WP_CONTENT_DIR`` (usually ``wp-content``)
* ``ABSPATH`` (the root of your WordPress installation)
* ``ABSPATH/../`` (one level up from the root of your WordPress installation)

However, if your ``composer.json`` file is in a different directory, or *WPf2b* isn't finding it (you can see the status on the Welcome page or About tab), you can define this constant:

Path to ``composer.json``
^^^^^^^^^^^^^^^^^^^^^^^^

You can set the path to your ``composer.json`` file:

.. code-block:: php

   define('WP_FAIL2BAN_COMPOSER_JSON_PATH', '/path/to/composer.json');

If the path is relative, it will be relative to the root of your WordPress installation, i.e. ``ABSPATH``.

.. note::
   This is the preferred method, as it will allow later versions of *WPf2b* to make inferences about your installation.

``true``
^^^^^^^^

*WPf2b* will simply assume you're using Composer.

.. code-block:: php

   define('WP_FAIL2BAN_USING_COMPOSER', true);
