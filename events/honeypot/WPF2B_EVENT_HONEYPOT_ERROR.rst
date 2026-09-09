.. _WPF2B_EVENT_HONEYPOT_ERROR:

WPF2B_EVENT_HONEYPOT_ERROR
--------------------------

.. rubric:: Honeypot error.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_HONEYPOT_ERROR``.

+----------+-----------+------------------------------------------------+
| syslog   | Facility  | :ref:`WP_FAIL2BAN_EX_HONEYPOT_LOG`             |
|          +-----------+------------------------------------------------+
|          | Level     | NOTICE                                         |
+----------+-----------+------------------------------------------------+

A failure occurred while the honeypot was processing a request. There is no dedicated fail2ban rule; treat it as a diagnostic event, not an attack signature.

.. seealso::
   | :ref:`WPF2B_EVENT_HONEYPOT_TRAP_ROBOTSTXT`
   | :ref:`feature-honeypot`

.. rubric:: History
.. versionadded:: 6.0.0
