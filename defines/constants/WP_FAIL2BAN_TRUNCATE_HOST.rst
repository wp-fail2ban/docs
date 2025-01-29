.. _WP_FAIL2BAN_TRUNCATE_HOST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_TRUNCATE_HOST
-------------------------

.. rubric:: Truncate hostname in syslog tag.
.. include:: default-disabled.rst

.. versionadded:: 3.5.0

----

Some Linux distributions have a hard limit on the length of the syslog tag. This setting truncates the hostname to help stay within those limits.

.. code-block:: php
   :caption: Example: Truncate hostname

   /**
    * Truncate hostname in syslog tag
    */
   define('WP_FAIL2BAN_TRUNCATE_HOST', 8);

.. seealso::
   * :ref:`WP_FAIL2BAN_HTTP_HOST`
   * :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG`

