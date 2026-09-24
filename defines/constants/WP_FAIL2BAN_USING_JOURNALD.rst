.. _WP_FAIL2BAN_USING_JOURNALD:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_USING_JOURNALD
--------------------------

.. rubric:: Configure journald installation detection.
.. include:: default-not-set.rst.inc

----

Overrides whether |WPf2b| considers journald active. When the constant is not
set, |WPf2b| automatically checks the local systemd and journal-syslog state.
Boolean ``true`` forces the detected state to active; boolean ``false`` disables
it.

A string value also forces the state to active, but its contents are not opened
or used as a local or remote destination. This constant does not select a
transport: |WPf2b| continues to write through PHP's ordinary
``openlog()``/``syslog()`` functions.

.. code-block:: php
   :caption: Example: Force journald detection active

   define('WP_FAIL2BAN_USING_JOURNALD', true);

You can also explicitly disable journald detection:

.. code-block:: php
   :caption: Example: Disable journald detection

   define('WP_FAIL2BAN_USING_JOURNALD', false);

.. rubric:: History
.. versionadded:: 6.0.0
