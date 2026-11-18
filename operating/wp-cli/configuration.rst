.. _operating_wp_cli_configuration:

Configuration and QuickStart
============================

.. _operating_wp_cli_config:

``wp fail2ban config``
----------------------

The configuration commands use the same settings as the plugin UI and resolve
their effective values in the same way. Names are case-insensitive and the
``WP_FAIL2BAN_`` prefix is optional.
:ref:`configuration_how_settings_are_resolved` explains how constants, saved
Premium settings, QuickStart, and defaults determine the effective value.

List values, optionally filtering by one or more substrings:

.. code-block:: console

   $ wp fail2ban config list
   $ wp fail2ban config list block_user proxy --format=json

Filters are matched against the full setting names and are combined as OR
conditions. The default columns are ``name``, ``value``, and ``source``;
``is_default`` is also available.

Read one effective value and, when needed, its source:

.. code-block:: console

   $ wp fail2ban config get block_user_enumeration
   $ wp fail2ban config get block_user_enumeration --field=source

Set a value with either plain-text or JSON input:

.. code-block:: console

   $ wp fail2ban config set block_user_enumeration on
   $ wp fail2ban config set proxies '["192.0.2.10"]' --format=json
   $ printf '%s\n' 'new-value' | wp fail2ban config set setting_name -

Plain-text boolean values accept ``1``, ``true``, ``yes``, or ``on`` for true
and ``0``, ``false``, ``no``, or ``off`` for false. Use JSON for arrays and
other structured values. Omitting the value, or using ``-``, reads it from
standard input.

On Premium, ``config set`` normally saves the value used by the Settings UI.
On Canonical and LTS it writes a constant to ``wp-config.php``. Pass
``--wp-config`` on Premium to write the constant instead. A constant already
controlling the setting prevents the saved Premium value from being changed;
change that constant or deliberately use ``--wp-config``. Configuration
commands operate at the network or installation level and do not accept
``--blog_id``.

Writing ``wp-config.php`` requires a conventional, writable configuration file
that the command can update safely. Back up or version the file, review the
result, and prefer deployment-managed constants when an automation system owns
it.

.. _operating_wp_cli_quickstart:

``wp fail2ban quickstart``
--------------------------

List every core and add-on card, or inspect one card:

.. code-block:: console

   $ wp fail2ban quickstart list
   $ wp fail2ban quickstart status spam-protection
   $ wp fail2ban quickstart spam-protection status

The output distinguishes toggleable cards from status-only and always-on
cards. Add-ons can register their own QuickStart toggles, so the list reflects
the active installation rather than a fixed set in the CLI package.

Toggle a card by slug:

.. code-block:: console

   $ wp fail2ban quickstart spam-protection enable
   $ wp fail2ban quickstart spam-protection disable

These operations have the same bundle and conflict behaviour as the UI. A
constant can satisfy part of a card or prevent its entire bundle from being
applied, and a later Advanced-settings change can supersede part of a selected
card. See :ref:`configuration_quickstart` before automating card changes.
