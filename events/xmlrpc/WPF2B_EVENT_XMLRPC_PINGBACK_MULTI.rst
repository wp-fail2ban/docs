.. _WPF2B_EVENT_XMLRPC_PINGBACK_MULTI:

WPF2B_EVENT_XMLRPC_PINGBACK_MULTI
---------------------------------

.. rubric:: Repeated pingback in one XML-RPC request.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_XMLRPC_PINGBACK_MULTI``.

Premium emits this event on the second ``pingback.ping`` call in a single
XML-RPC request, regardless of whether :ref:`WP_FAIL2BAN_LOG_PINGBACKS` is
enabled. |WPf2b| permits the first call; each later pingback receives a
per-call XML-RPC fault, while a multicall can continue with its other entries.

.. list-table::
   :stub-columns: 1
   :widths: 12 18 70

   * - syslog
     - Facility
     - :ref:`WP_FAIL2BAN_AUTH_LOG`
   * -
     - Level
     - .. include:: ../level_notice.rst
   * -
     - Message
     - ``Blocked multicall pingback attempt`` when ordinary pingback logging is
       disabled; ``Skipped multicall pingback attempt`` when it is enabled.
   * - fail2ban
     - Filter
     - :ref:`filters-wordpress-soft` for the ``Blocked`` message only. The
       ``Skipped`` message has no shipped filter rule.
   * -
     - Rule
     - .. include:: ../../autogen/filters.d/rules/pingback-multicall.rst.inc

.. seealso::
   | :ref:`feature-pingbacks`
   | :ref:`fail2ban_filters_tags`
   | :ref:`WP_FAIL2BAN_LOG_PINGBACKS`

.. rubric:: History
.. versionadded:: 6.3.0
