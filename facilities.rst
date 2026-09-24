.. _facilities:

==========
Facilities
==========

The shipped Unix default is normally **LOG_AUTHPRIV** for both the
authentication and user facility families. :ref:`WP_FAIL2BAN_USE_LOG_AUTH` can
select **LOG_AUTH** or a local facility for the authentication family;
:ref:`WP_FAIL2BAN_USE_LOG_USER` can make the user family use **LOG_USER** or a
local facility instead. Individual channel constants can also select a
supported local facility.

The syslog daemon's own rules determine whether a priority is retained for a
facility. In particular, some ordinary configurations do not retain Info
messages sent to **LOG_USER**.

The syslog daemon determines which file receives each facility. Ensure the fail2ban jail reads the same destination; see :ref:`configuration__fail2ban`.


+---------------------+---------------------------------------------------------+
| Facility            | Description                                             |
+=====================+=========================================================+
| .. _LOG_AUTH:       | security/authorization messages (use LOG_AUTHPRIV       |
|                     | instead in systems where that constant is defined)      |
| LOG_AUTH            |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_AUTHPRIV:   | security/authorization messages (private)               |
|                     |                                                         |
| LOG_AUTHPRIV        |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_CRON:       | clock daemon (cron and at)                              |
|                     |                                                         |
| LOG_CRON            |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_DAEMON:     | other system daemons                                    |
|                     |                                                         |
| LOG_DAEMON          |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_KERN:       | kernel messages                                         |
|                     |                                                         |
| LOG_KERN            |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_LOCAL0...7: | reserved for local use, these are not available in      |
|                     | Windows                                                 |
| LOG_LOCAL0...7      |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_LPR:        | line printer subsystem                                  |
|                     |                                                         |
| LOG_LPR             |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_MAIL:       | mail subsystem                                          |
|                     |                                                         |
| LOG_MAIL            |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_NEWS:       | USENET news subsystem                                   |
|                     |                                                         |
| LOG_NEWS            |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_SYSLOG:     | messages generated internally by syslogd                |
|                     |                                                         |
| LOG_SYSLOG          |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_USER:       | generic user-level messages                             |
|                     |                                                         |
| LOG_USER            |                                                         |
+---------------------+---------------------------------------------------------+
| .. _LOG_UUCP:       | UUCP subsystem                                          |
|                     |                                                         |
| LOG_UUCP            |                                                         |
+---------------------+---------------------------------------------------------+


==================
Default Facilities
==================

Free
^^^^

.. include:: autogen/free/default_facilities.rst

Premium
^^^^^^^

.. include:: autogen/premium/default_facilities.rst

The Premium table lists Premium additions. Premium also inherits every Free
channel above.
