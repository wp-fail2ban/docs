.. _events:

======
Events
======

.. note::

   Events may belong to more than one class.

.. _events_AUTH:

AUTH Events
-----------

Authentication events. Broadly, anything to do with users.

.. toctree::

   events/auth/WPF2B_EVENT_AUTH_OK
   events/auth/WPF2B_EVENT_AUTH_FAIL
   events/auth/WPF2B_EVENT_AUTH_EMPTY_USER

   events/auth/WPF2B_EVENT_AUTH_BLOCK_USER
   events/auth/WPF2B_EVENT_AUTH_BLOCK_USER_ENUM
   events/auth/WPF2B_EVENT_AUTH_BLOCK_USERNAME_LOGIN

   events/rest/WPF2B_EVENT_REST_AUTH_OK
   events/rest/WPF2B_EVENT_REST_AUTH_FAIL

.. _events_BLOCK:

BLOCK Events
------------

Things that have been actively prevented.

.. toctree::

   events/block/WPF2B_EVENT_BLOCK_COUNTRY

   events/auth/WPF2B_EVENT_AUTH_BLOCK_USER
   events/auth/WPF2B_EVENT_AUTH_BLOCK_USER_ENUM
   events/auth/WPF2B_EVENT_AUTH_BLOCK_USERNAME_LOGIN

   events/xmlrpc/WPF2B_EVENT_XMLRPC_BLOCKED

.. _events_COMMENT:

COMMENT Events
--------------

Anything to do with comments.

.. toctree::

   events/comment/WPF2B_EVENT_COMMENT
   events/comment/WPF2B_EVENT_COMMENT_SPAM

   events/comment/WPF2B_EVENT_COMMENT_NOT_FOUND
   events/comment/WPF2B_EVENT_COMMENT_CLOSED
   events/comment/WPF2B_EVENT_COMMENT_TRASH
   events/comment/WPF2B_EVENT_COMMENT_DRAFT
   events/comment/WPF2B_EVENT_COMMENT_PASSWORD

.. _events_OTHER:

OTHER Events
------------

Whatever doesn't fit better into another Class.

.. toctree::

   events/other/WPF2B_EVENT_OTHER_UNKNOWN_PROXY

.. _events_PASSWORD:

PASSWORD Events
---------------

Password-related events.

.. toctree::

   events/password/WPF2B_EVENT_PASSWORD_REQUEST

.. _events_REST:

REST Events
-----------

REST API events.

.. toctree::

   events/rest/WPF2B_EVENT_REST_AUTH_OK
   events/rest/WPF2B_EVENT_REST_AUTH_FAIL

.. _events_SPAM:

SPAM Events
-----------

Anything that can be classified as spam, not just comments.

.. toctree::

   events/comment/WPF2B_EVENT_COMMENT_SPAM

.. _events_XMLRPC:

XMLRPC Events
-------------

XML-RPC events, including Pingbacks.

.. toctree::

   events/xmlrpc/WPF2B_EVENT_XMLRPC_BLOCKED
   events/xmlrpc/WPF2B_EVENT_XMLRPC_PINGBACK
   events/xmlrpc/WPF2B_EVENT_XMLRPC_PINGBACK_BOGUS
   events/xmlrpc/WPF2B_EVENT_XMLRPC_PINGBACK_ERROR
