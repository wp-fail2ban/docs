.. _WPF2B_EVENT_XMLRPC_PINGBACK_MULTI:

WPF2B_EVENT_XMLRPC_PINGBACK_MULTI
---------------------------------

.. rubric:: Repeated pingback in one XML-RPC request.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_XMLRPC_PINGBACK_MULTI``.

|WPf2b| permits the first ``pingback.ping`` call in a request. Each later
pingback receives a per-call XML-RPC fault, while a multicall can continue with
its other entries. This event is emitted once, on the second pingback,
regardless of whether ordinary pingback logging is enabled.

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

.. seealso::
   | :ref:`WP_FAIL2BAN_LOG_PINGBACKS`
   | :ref:`feature-pingbacks`

.. rubric:: History
.. versionadded:: 6.3.0
