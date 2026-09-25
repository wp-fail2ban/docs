.. _WPF2B_EVENT_COMMENT_SPAM_AKISMET:

WPF2B_EVENT_COMMENT_SPAM_AKISMET
--------------------------------

.. rubric:: Comment marked as spam.
.. rubric:: *Premium only*

Premium listener: ``WPF2B_EVENT_COMMENT_SPAM_AKISMET``.

+-----------+-----------+-------------------------------------------------------------------------+
| syslog    | Facility  | .. include:: ../facility_spam_log.rst                                   |
|           +-----------+-------------------------------------------------------------------------+
|           | Level     | .. include:: ../level_notice.rst                                        |
|           +-----------+-------------------------------------------------------------------------+
|           | Example   | ``Akismet discarded spam comment on fqdn.example.com from 192.0.42.1``  |
+-----------+-----------+-------------------------------------------------------------------------+
| fail2ban  | Filter    | :ref:`filters-wordpress-hard`                                           |
|           +-----------+-------------------------------------------------------------------------+
|           | Rule      | .. include:: ../../autogen/filters.d/rules/comment-spam-akismet.rst.inc |
+-----------+-----------+-------------------------------------------------------------------------+

.. rubric:: History
.. versionadded:: 5.0.0
