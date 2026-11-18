.. _operating_wp_cli_events:

Premium events and reports
==========================

The ``event`` and ``report`` groups require Premium with a Bronze or higher
plan. They query :ref:`operating_event_storage`; fail2ban itself continues to
act on syslog or journal messages rather than this database history.

Event history primarily records attacks. Usernames, request data, WAF payloads,
and other values can therefore be attacker-controlled. Output escaping protects
the selected display format but does not make a value safe to evaluate as a
shell command, spreadsheet formula, HTML, or code. Treat exports as untrusted
and potentially sensitive evidence.

.. _operating_wp_cli_event:

``wp fail2ban event``
---------------------

List recent events, page through a result, or stream every matching record:

.. code-block:: console

   $ wp fail2ban event list --per-page=50
   $ wp fail2ban event list --date-range=2026-11-01..2026-11-13
   $ wp fail2ban event list --all --event-class=waf --format=json

Filters include inclusive event-ID and date ranges, event type, one or more
event classes, country, IP address, and exact username. Date bounds use the site
timezone unless ``--utc`` is present. Password filters are read from standard
input or a TTY prompt so they need not appear in the process list.

``--event-type`` accepts:

* ``success`` for events recording a successful action;
* ``failure`` for events recording a failed action; and
* ``plugin`` for events reported by plugins integrated with |WPf2b|.

Do not normally use ``--all`` without a filter. It returns the entire event log,
which can take a long time and produce a very large result on an installation
with many events. Narrow the query by date, event type, event class, or another
filter unless you deliberately need a complete export.

Show one event by ID with ``get``:

.. code-block:: console

   $ wp fail2ban event get 12345
   $ wp fail2ban event get 12345 --show-waf --format=json

Passwords are excluded by default from both list and get output;
``--show-password`` requests them explicitly. WAF payload data is also excluded
unless ``--show-waf`` is present or a WAF event-class filter has already made
that data part of the requested result. Protect the terminal, logs, and
destination files whenever disclosing either field.

On multisite, event queries are network-wide by default and include a
``blog_id`` column in the default list output. Use ``--blog_id`` or an explicit
WP-CLI ``--url`` to select one blog.

.. _operating_wp_cli_report:

``wp fail2ban report``
----------------------

Reports group event history by country, IP address, username, or password:

.. code-block:: console

   $ wp fail2ban report country --period=week --utc
   $ wp fail2ban report ip --period=month --format=json
   $ wp fail2ban report username --period=all
   $ wp fail2ban report password --period=24h

``--period`` accepts ``24h`` (the default), ``week``, ``month``, ``year``, or
``all``. Alternatively, ``--year`` selects one complete prior calendar year.
The two options are mutually exclusive. Period boundaries and labels use the
site timezone unless ``--utc`` is present. Reports are network-wide by default;
``--blog_id`` or an explicit ``--url`` restricts them to one blog.

The password report uses plaintext passwords as its grouping key. It has no
``--show-password`` safeguard because the password is the requested dimension.
Use it only where that disclosure is intended, and treat every value as both
sensitive and attacker-controlled.
