.. _WP_FAIL2BAN_EX_LOG_POST_DATA:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_POST_DATA
----------------------------

.. rubric:: Enable logging of POST data.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

When enabled, Premium reads the unparsed request body for every event and stores
it in the ``post`` column of ``wp_fail2ban_log``. It does not add the body to the
syslog message. WAF events store their request body independently of this
setting.

The default is disabled, so ordinary event rows do not retain complete request
bodies. Request bodies can contain passwords, tokens, personal information, or
other sensitive material. |WPf2b| does not select fields, sanitise, transform,
or truncate the body before storing it.

The remote requester controls both the body's content and, within limits imposed
elsewhere in the request path, its size. Enabling this setting therefore lets
remote requests increase the size of event rows and the database work and
storage consumed by event logging. See :ref:`feature-event-store` for the event
store as a whole.

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
