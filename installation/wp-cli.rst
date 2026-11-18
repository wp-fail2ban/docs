.. _installation_wp_cli:

WP-CLI integration
==================

After installing and activating |WPf2b|, install the
`wp-fail2ban/wp-fail2ban-cli package from Packagist
<https://packagist.org/packages/wp-fail2ban/wp-fail2ban-cli>`_:

.. code-block:: console

   $ wp package install wp-fail2ban/wp-fail2ban-cli

This makes the plugin's ``wp fail2ban`` commands available to WP-CLI. Run them
from the WordPress installation, or select it with WP-CLI's global ``--path``
or ``--url`` option. Confirm that the integration is available with:

.. code-block:: console

   $ wp fail2ban status

See :ref:`operating_wp_cli` for the available commands and their behaviour.
