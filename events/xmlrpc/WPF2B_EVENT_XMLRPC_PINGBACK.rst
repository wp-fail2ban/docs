.. _WPF2B_EVENT_XMLRPC_PINGBACK:

WPF2B_EVENT_XMLRPC_PINGBACK
---------------------------

.. rubric:: Pingback stored.

Premium listener: ``WPF2B_EVENT_XMLRPC_PINGBACK``.

Premium emits this event when WordPress stores an XML-RPC pingback while
:ref:`WP_FAIL2BAN_LOG_PINGBACKS` is enabled. EventData ``ref_id`` is the target
post ID; ``waf_data.comment_id`` is the stored pingback comment ID.

+-----------+-----------+---------------------------------------------------------------------------------------------------------------------------------------------+
| syslog    | Facility  | :ref:`WP_FAIL2BAN_PINGBACK_LOG`                                                                                                             |
|           +-----------+---------------------------------------------------------------------------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_info.rst                                                                                                              |
|           +-----------+---------------------------------------------------------------------------------------------------------------------------------------------+
|           | Example   | ``Pingback 42 on post 123 by "https://pingback.example/foo/bar" on fqdn.example.com from 192.0.42.1``                                       |
+-----------+-----------+---------------------------------------------------------------------------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-soft`                                                                                                               |
|           +-----------+---------------------------------------------------------------------------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/pingback.rst.inc                                                                                 |
+-----------+-----------+---------------+-----------------------------------+-----------------------------------------------------------------------------------------+
| EventData | ref_id                    | .. include:: ../ref_id-type.rst   | Target post ID.                                                                         |
|           +-----------+---------------+-----------------------------------+-----------------------------------------------------------------------------------------+
|           | waf_data  | comment_id    | ``int``                           | Stored pingback comment ID.                                                             |
|           |           +---------------+-----------------------------------+-----------------------------------------------------------------------------------------+
|           |           | author_url    | ``string``                        | Submitted source URL. Treat it as untrusted.                                            |
+-----------+-----------+---------------+-----------------------------------+-----------------------------------------------------------------------------------------+

.. seealso::
   | :ref:`feature-pingbacks`
   | :ref:`WPF2B_EVENT_XMLRPC_PINGBACK_ERROR`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_PINGBACKS`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-COMMENT_ID``, ``F-POST_ID``, ``F-PINGBACK_FROM_URL`` tags.
.. versionadded:: 4.0.0
