.. _WPF2B_EVENT_BLOCK_COUNTRY:

WPF2B_EVENT_BLOCK_COUNTRY
-------------------------

.. rubric:: Attempted access from a blocked Country.

.. rubric:: *Premium only*

+----------+----------+--------------------------------------------------+
| syslog   | Facility | LOG_AUTH or LOG_AUTHPRIV                         |
|          +----------+--------------------------------------------------+
|          | Level    | NOTICE                                           |
+----------+----------+--------------------------------------------------+
| fail2ban | Filter   | :ref:`wordpress-hard_conf`                       |
|          +----------+--------------------------------------------------+
|          | Rule     | ``Blocked access from country '..' from <HOST>`` |
+----------+----------+--------------------------------------------------+

.. seealso::
   :ref:`WP_FAIL2BAN_USE_AUTHPRIV`
