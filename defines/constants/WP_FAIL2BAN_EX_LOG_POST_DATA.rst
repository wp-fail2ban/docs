.. _WP_FAIL2BAN_EX_LOG_POST_DATA:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_POST_DATA
----------------------------

.. rubric:: Enable logging of POST data.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, Premium reads ``php://input`` for every event and stores the
unparsed request body PHP makes available in the ``post`` column of
``wp_fail2ban_log``. It does not add the body to the syslog message. When normal
PHP multipart parsing is enabled, PHP consumes an in-limit
``multipart/form-data`` body before this read, so it is not available through
``php://input``. WAF events read the body independently of this setting.

The default is disabled, so ordinary event rows do not retain complete request
bodies. Request bodies can contain passwords, tokens, personal information, or
other sensitive material. |WPf2b| does not select fields, sanitise, transform,
or truncate the body before storing it.

PHP's documented ``post_max_size`` default is ``8M``, illustrating that ordinary
POST bodies may already be measured in megabytes. That setting limits normal
POST parsing but is not a reliable bound on ``php://input``: an oversized body
can remain available there. The effective stored size is determined by the
limits actually enforced elsewhere in the request path.

The remote requester controls both the content and size of any body made
available. Individual event rows can therefore become much larger, and repeated
bodies can drive substantial database growth and database I/O. See
:ref:`feature-event-store` for the event store as a whole.

.. code-block:: php
   :caption: Example: Enable POST data logging

   /**
    * Enable logging of POST data.
    */
   define('WP_FAIL2BAN_EX_LOG_POST_DATA', true);

.. seealso::
   * :ref:`operating_event_storage`
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_PTR`
   * :ref:`WP_FAIL2BAN_EX_LOG_URL`

.. rubric:: History
.. versionadded:: 4.3.0
