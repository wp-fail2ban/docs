.. _feature-comments:

Comments
========

|WPf2b| can log accepted comments, rejected comment attempts, and trackbacks. Pingbacks arrive through XML-RPC; see :ref:`feature-pingbacks`.

.. toctree::
   :maxdepth: 1

   comment-attempts
   trackbacks

.. _feature-comments-logging:

Comment logging
---------------

When enabled, each ordinary comment WordPress stores is logged once (extra filter) with the comment ID, whatever its approval status. That includes comments submitted through the classic form, the REST API (including notes), and XML-RPC. Pingbacks and trackbacks are not logged here; they have their own messages. Approving a pending comment later does not write a second line. This is informational, not a ban signal.

The individual control is on the Logging tab in Advanced settings.

.. include:: ../autogen/join/feature-comments.rst
   :end-before: Source
