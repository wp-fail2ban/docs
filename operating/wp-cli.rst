.. _operating_wp_cli:

Using WP-CLI
============

The ``wp fail2ban`` command tree exposes |WPf2b| status, configuration,
QuickStart, diagnostics, retained messages, and Premium event history to shell
scripts and administrators. :ref:`installation_wp_cli` explains how to install
the small WP-CLI package that registers the parent command. The implementations
described here are part of the main plugin.

Use WP-CLI's help for the exact options supported by the installed plugin:

.. code-block:: console

   $ wp help fail2ban
   $ wp help fail2ban config set
   $ wp help fail2ban event list

Most tabular commands accept the standard ``--format``, ``--fields``, and
``--field`` options. Formats provided by WP-CLI include tables and
machine-readable output such as JSON and CSV. The examples on these pages omit
WP-CLI global options; ``--path`` and ``--url`` can select the WordPress
installation or site in the usual way.

.. list-table:: Command groups
   :header-rows: 1
   :widths: 28 50 22

   * - Command
     - Purpose
     - Availability
   * - ``wp fail2ban status``
     - Show the active edition, versions, logging facilities, and feature state.
     - All editions
   * - ``wp fail2ban config``
     - List, read, and change configuration values.
     - All editions
   * - ``wp fail2ban quickstart``
     - Inspect and toggle QuickStart cards.
     - All editions
   * - ``wp fail2ban message``
     - Read the last messages retained by WordPress.
     - All editions
   * - ``wp fail2ban check``
     - Run the plugin's Site Health diagnostics.
     - All editions
   * - ``wp fail2ban event``
     - Query individual records in Premium event history.
     - Premium, Bronze or higher
   * - ``wp fail2ban report``
     - Group Premium event history for reporting.
     - Premium, Bronze or higher

.. toctree::
   :maxdepth: 1

   wp-cli/configuration
   wp-cli/diagnostics
   wp-cli/events

Exit status and scripting
-------------------------

Invalid arguments, an inactive or incompatible plugin, and unavailable Premium
features produce a non-zero exit status. ``wp fail2ban check`` also exits 1
when an included Site Health test is critical; a recommended result alone does
not fail the command. Do not parse the human-readable table layout in scripts.
Select a stable field with ``--field`` or request JSON or CSV instead.

Commands run with the same WordPress and operating-system access as the WP-CLI
process. In particular, configuration writes can modify ``wp-config.php``, and
event output can contain sensitive or attacker-controlled values. Grant shell
and automation access accordingly.
