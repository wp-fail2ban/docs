.. _operating_wp_cli_diagnostics:

Status, messages, and checks
============================

.. _operating_wp_cli_status:

``wp fail2ban status``
----------------------

``wp fail2ban status`` reports the active edition and version, Premium plan
when applicable, PHP and WordPress versions, multisite state, logging-facility
mapping, Premium event availability, and whether last-message retention is
enabled. Use a single field for concise health probes:

.. code-block:: console

   $ wp fail2ban status --field=version
   $ wp fail2ban status --format=json

This confirms that WordPress loaded the plugin and resolved its configuration.
It does not prove that syslog received a message or that fail2ban applied a ban;
use :ref:`installation_verifying` for an end-to-end test.

.. _operating_wp_cli_message:

``wp fail2ban message list``
----------------------------

This command lists the recent messages displayed in the Dashboard's **Last 5
messages** widget:

.. code-block:: console

   $ wp fail2ban message list
   $ wp fail2ban message list --blog_id=2 --format=json

The default fields are ``dt``, ``priority``, and ``message``. On multisite, the
default is the network-retained list. An explicit ``--blog_id`` or site selected
with ``--url`` reads that blog's list. If
:ref:`WP_FAIL2BAN_DISABLE_LAST_LOG` disables retention, the command writes an
explanation to standard error and returns an empty list.

The retained list is only a convenient recent view. Its absence does not show
that a message was never logged, and its presence does not show that fail2ban
read or acted on it. See :ref:`operating_logging` and :ref:`operating_syslog`
for the authoritative host-side path.

.. _operating_wp_cli_check:

``wp fail2ban check``
---------------------

Run the plugin's Site Health tests without opening the WordPress admin screen:

.. code-block:: console

   $ wp fail2ban check
   $ wp fail2ban check --fields=test,status,description --format=json

The default fields are ``test``, ``status``, and ``label``. ``description`` and
``actions`` are also available with HTML removed. Tests that do not apply are
omitted. Any included critical result makes the command exit 1; good and
recommended results exit 0. This keeps an unavailable ``systemctl`` query, for
example, from failing automation by itself.

The command is not strictly read-only. Like the Site Health screen, a run can
refresh the Cloudflare address list and catch up Premium's event lookup table.
The checks are server- or network-scoped and do not accept a blog filter. The
command does not integrate with ``wp doctor``. The limitations and host-access
guidance in :ref:`operating_site_health` apply equally here.
