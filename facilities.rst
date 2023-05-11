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

=================
Logfile Reference
=================

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


==================
Default Facilities
==================

+----------+-----------------------------------------+
| Facility | Define                                  |
+==========+=========================================+
| LOG_AUTH | :ref:`WP_FAIL2BAN_AUTH_LOG`             |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_COMMENT_EXTRA_LOG`    |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PINGBACK_ERROR_LOG`   |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PLUGIN_AUTH_LOG`      |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PLUGIN_SPAM_LOG`      |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_SPAM_LOG`             |
+----------+-----------------------------------------+
| LOG_USER | :ref:`WP_FAIL2BAN_COMMENT_LOG`          |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PASSWORD_REQUEST_LOG` |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PINGBACK_LOG`         |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PLUGIN_COMMENT_LOG`   |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PLUGIN_OTHER_LOG`     |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PLUGIN_PASSWORD_LOG`  |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PLUGIN_REST_LOG`      |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_PLUGIN_XMLRPC_LOG`    |
|          +-----------------------------------------+
|          | :ref:`WP_FAIL2BAN_XMLRPC_LOG`           |
+----------+-----------------------------------------+

Premium
^^^^^^^

+----------+-------------------------------------------+
| Facility | Define                                    |
+==========+===========================================+
| LOG_USER | :ref:`WP_FAIL2BAN_EX_BLOCK_COUNTRIES_LOG` |
+----------+-------------------------------------------+
|          | :ref:`WP_FAIL2BAN_EX_XMLRPC_LOG`          |
+----------+-------------------------------------------+
|          | :ref:`WP_FAIL2BAN_EX_WAF_LOG`             |
+----------+-------------------------------------------+
