.. _WP_FAIL2BAN_SYSLOG_SHORT_TAG:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SYSLOG_SHORT_TAG
----------------------------

.. rubric:: Use short syslog tag.
.. include:: default-disabled.rst

----

Forces WPf2b to use a shorter syslog tag. This is useful on systems where the standard tag length causes issues, particularly with some Linux distributions.

.. code-block:: php
   :caption: Example: Enable short syslog tag

   /**
    * Use short syslog tag
    */
   define('WP_FAIL2BAN_SYSLOG_SHORT_TAG', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_HTTP_HOST`

.. rubric:: History
.. versionadded:: 3.0.0