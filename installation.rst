.. _installation:

============
Installation
============

.. _installation_overview:

Overview
--------

*WP fail2ban* installs like any other WordPress plugin; in most cases, you don’t need to do anything differently.

However, recent changes in the WordPress ecosystem mean you should carefully consider which "flavour" [#flavour]_ of *WP fail2ban* is right for you.

Starting with version 5.4.0, there is a **Canonical Free flavour** of *WP fail2ban* hosted on GitHub, and a **Long-Term Support (LTS) flavour** hosted on WordPress.org.

This decision is a response to increasing security concerns regarding the WordPress Plugin Directory, notably the recent supply chain attack on Advanced Custom Fields (ACF). You can read more about the changes in `this blog post <https://wp-fail2ban.com/blog/2024/11/08/version-5-4-0-changes/>`_.

Canonical Free Flavour (GitHub)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The latest stable version, updated with new features and security patches, is hosted on `GitHub <https://github.com/wp-fail2ban/wp-fail2ban>`_. This is the **recommended flavour**.

LTS Flavour (WordPress.org)
~~~~~~~~~~~~~~~~~~~~~~~~~~~

The version hosted on `WordPress.org <https://wordpress.org/plugins/wp-fail2ban/>`_ will focus on long-term stability. It will receive **bug fixes** and **compatibility updates** to support newer versions of WordPress and will support PHP 7.4 for as long as possible, but it will generally lag *at least* one major version behind Canonical.

Installation Methods
--------------------

Depending on your workflow and preferences, there are several ways to install *WP fail2ban*:

Canonical Free flavour
~~~~~~~~~~~~~~~~~~~~~~

ZIP file from GitHub
^^^^^^^^^^^^^^^^^^^^

This is the simplest method, and the best option if you already have the LTS flavour installed:

  - Download the latest release directly from `GitHub <https://github.com/wp-fail2ban/wp-fail2ban/releases>`_.
  - Optionally (but recommended), verify the signature of the zip file.
  - Upload the zip file to your WordPress installation.

Install via Composer
^^^^^^^^^^^^^^^^^^^^

Add the following to your ``composer.json`` file:

.. code-block:: json

   "require": {
       "wp-fail2ban/wp-fail2ban": "@stable"
   }

or, from the command line, 

.. code-block:: bash

   composer require wp-fail2ban/wp-fail2ban

Install with WP-CLI
^^^^^^^^^^^^^^^^^^^

This method requires the `Git Updater <https://git-updater.com/git-updater/>`_ plugin. From the command line, run:

.. code-block:: bash

        wp plugin install-git wp-fail2ban


LTS Flavour
~~~~~~~~~~~

Install through the WordPress Plugin Directory as usual.

.. _installation_premium:

Premium Installation
---------------------

The Premium version of *WP fail2ban* can be downloaded from Freemius and installed as a zip file, or installed via Composer. Details for installation using Composer can be found on the `Members page <https://wp-fail2ban.com/members/#!/login>`_.

Activating *WP fail2ban* Premium will create two database tables:

- ``wp_fail2ban_log``
- ``wp_fail2ban_plugins``

Note that *WP fail2ban* Premium never drops these database tables.


Self-Updater and Signed Releases
---------------------------------

With version 5.4.0, a **self-updater** has been introduced in the Canonical Free flavour, making it easy to keep the plugin up-to-date without the WordPress Plugin Directory; the Premium version already supported self-updates. If the **Git Updater** plugin or **Composer** is detected, they will take precedence.

In addition, **signed releases** are now part of the update process. Both release tags and archives are signed, allowing you to verify the authenticity of the plugin before installing it. While this verification process is currently manual, automated verification is planned.

.. rubric:: Footnotes

.. [#flavour] The term "flavour" is used here in the sense of a "version" or "edition" of the plugin.
