.. _WPF2B_EVENT_COMMENT_SPAM:

WPF2B_EVENT_COMMENT_SPAM
------------------------

.. rubric:: Comment marked as spam.

+------------+-----------+-----------------------------------------------------------+
| syslog     | Facility  | .. include:: ../facility_spam_log.rst                     |
|            +-----------+-----------------------------------------------------------+
|            | Level     | .. include:: ../level_notice.rst                          |
|            +-----------+-----------------------------------------------------------+
|            | Example   | ``Spam comment 42 on fqdn.example.com from 192.0.42.1``   |
+------------+-----------+-----------------------------------------------------------+
| fail2ban   | Filter    | :ref:`filters-wordpress-hard`                             |
|            +-----------+-----------------------------------------------------------+
|            | Rule      | ``Spam comment <F-COMMENT_ID>\d+</F-COMMENT_ID><_tail>``  |
+------------+-----------+-----------------------------------+-----------------------+
| EventData  | ref_id    | .. include:: ../ref_id-type.rst   | Comment ID            |
+------------+-----------+-----------------------------------+-----------------------+

.. seealso::
   | :ref:`fail2ban_filters_tags`

.. rubric:: History
.. versionchanged:: 6.0.0
   Added ``F-COMMENT_ID`` tag.
.. versionadded:: 4.0.0