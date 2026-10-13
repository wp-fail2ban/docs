.. _WPF2B_EVENT_OTHER_TRACKBACK_ERROR:


WPF2B_EVENT_OTHER_TRACKBACK_ERROR
---------------------------------

.. rubric:: Trackback error.

Premium listener: ``WPF2B_EVENT_OTHER_TRACKBACK_ERROR``.

Premium emits this event when WordPress begins processing a trackback but does
not store it before the request ends, while :ref:`WP_FAIL2BAN_LOG_PINGBACKS` is
enabled.

A stored trackback uses :ref:`WPF2B_EVENT_OTHER_TRACKBACK` instead. Submissions
rejected before WordPress begins trackback processing produce neither event.

+-----------+-----------+---------------------------------------------------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_PINGBACK_LOG`                                                                               |
|           +-----------+---------------------------------------------------------------------------------------------------------------+
|           | Level     | NOTICE                                                                                                        |
|           +-----------+---------------------------------------------------------------------------------------------------------------+
|           | Example   | ``Trackback failed for post 123 by "https://trackback.example/foo/bar" on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+---------------------------------------------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                                                                 |
|           +-----------+---------------------------------------------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/trackback-failed.rst.inc                                           |
+-----------+-----------+---------------+-----------------------------------+-----------------------------------------------------------+
| EventData | ref_id                    | .. include:: ../ref_id-type.rst   | Post ID                                                   |
|           +-----------+---------------+-----------------------------------+-----------------------------------------------------------+
|           | waf_data  | trackback_url | ``string``                        | Trackback URL.                                            |
|           |           +---------------+-----------------------------------+-----------------------------------------------------------+
|           |           | charset       | ``string``                        | Character set.                                            |
|           |           +---------------+-----------------------------------+-----------------------------------------------------------+
|           |           | title         | ``string``                        | Title.                                                    |
|           |           +---------------+-----------------------------------+-----------------------------------------------------------+
|           |           | excerpt       | ``string``                        | Excerpt.                                                  |
|           |           +---------------+-----------------------------------+-----------------------------------------------------------+
|           |           | blog_name     | ``string``                        | Blog name.                                                |
+-----------+-----------+---------------+-----------------------------------+-----------------------------------------------------------+

.. seealso::
   | :ref:`feature-trackbacks`
   | :ref:`WPF2B_EVENT_OTHER_TRACKBACK`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_PINGBACKS`

.. rubric:: History
.. versionadded:: 6.0.0
