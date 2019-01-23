.. _facilities:

==========
Facilities
==========

While the full list of facilities is reproduced here for completeness, using anything but **LOG_AUTH**, **LOG_AUTHPRIV**, and/or **LOG_LOCAL0**\ ..\ **7** is unlikely to have the desired results.

==============  ===========
Facility        Description
==============  ===========
LOG_AUTH        security/authorization messages (use LOG_AUTHPRIV instead in systems where that constant is defined)
LOG_AUTHPRIV    security/authorization messages (private)
LOG_CRON        clock daemon (cron and at)
LOG_DAEMON      other system daemons
LOG_KERN        kernel messages
LOG_LOCAL0...7  reserved for local use, these are not available in Windows
LOG_LPR         line printer subsystem
LOG_MAIL        mail subsystem
LOG_NEWS        USENET news subsystem
LOG_SYSLOG      messages generated internally by syslogd
LOG_USER        generic user-level messages
LOG_UUCP        UUCP subsystem
==============  ===========

