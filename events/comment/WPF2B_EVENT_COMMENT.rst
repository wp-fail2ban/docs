.. _WPF2B_EVENT_COMMENT:

WPF2B_EVENT_COMMENT
-------------------

.. rubric:: Comment submitted.

+-----------+-------------+--------------------------------+
| syslog    | Facility    | :ref:`WP_FAIL2BAN_COMMENT_LOG` |
|           +-------------+--------------------------------+
|           | Level       | INFO                           |
+-----------+-------------+--------------------------------+
| fail2ban  | Filter      | :ref:`wordpress-extra_conf`    |
|           +-------------+--------------------------------+
|           | Rule        | ``Comment \d+ from <HOST>``    |
+-----------+-------------+--------------------------------+
| EventData | ``$ref_id`` | Comment ID                     |
+-----------+-------------+--------------------------------+

.. versionadded:: 4.0.0
