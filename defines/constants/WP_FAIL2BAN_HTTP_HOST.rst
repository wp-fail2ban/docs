.. _WP_FAIL2BAN_HTTP_HOST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_HTTP_HOST
---------------------

.. rubric:: Override the hostname used for logging.
.. include:: default-disabled.rst.inc

----

Forces |WPf2b| to use a specific hostname for logging instead of the detected
HTTP host.

This setting was introduced as a workaround for older syslog implementations
with very short limits on the identifier: a shorter hostname kept the default
``wordpress(host)`` identifier within that limit. For this case, prefer
:ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST`, which moves the hostname into the
human-readable message and leaves a short, stable identifier.

The override remains available when logging needs to use a fixed hostname for
another reason.

.. code-block:: php
   :caption: Example: Set specific hostname

   /**
    * Override HTTP host detection
    */
   define('WP_FAIL2BAN_HTTP_HOST', 'example.com');

.. note::
   This affects logging only; it does not change WordPress's behaviour.

.. seealso::
   * :ref:`WP_FAIL2BAN_SYSLOG_INLINE_HOST`
   * :ref:`WP_FAIL2BAN_TRUNCATE_HOST`

.. rubric:: History
.. versionadded:: 3.0.0
