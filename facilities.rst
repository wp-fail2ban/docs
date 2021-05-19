.. _facilities:

==========
Facilities
==========

While the full list of facilities is reproduced here for completeness, using anything but **LOG_AUTH**, **LOG_AUTHPRIV**, and/or **LOG_LOCAL0**\ ..\ **7** is unlikely to have the desired results. **LOG_USER** can be used for Notices, but Info messages are generally not saved.


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


.. _syslog_logfiles:

========
Logfiles
========

+-----------+--------+-----------------------+-----------------------+-----------------------+
| OS        | Level  | LOG_AUTH              | LOG_AUTHPRIV          | LOG_USER              |
+===========+========+=======================+=======================+=======================+
| CentOS 7  |        | *(not used)*          | ``/var/log/secure``   |                       |
+-----------+--------+-----------------------+-----------------------+-----------------------+
| FeeBSD    | INFO   | ``/var/log/auth/log`` | ``/var/log/auth/log`` | -                     |
+           +--------+-----------------------+-----------------------+-----------------------+
|           | NOTICE | ``/var/log/auth/log`` | ``/var/log/auth/log`` | ``/var/log/messages`` |
+-----------+--------+-----------------------+-----------------------+-----------------------+
| Ubuntu 18 | (all)  | ``/var/log/auth.log`` | ``/var/log/auth.log`` | ``/var/log/syslog``   |
+-----------+--------+-----------------------+-----------------------+-----------------------+

