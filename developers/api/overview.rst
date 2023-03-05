.. _developers_api_overview:

Overview
--------

The basic steps are:

.. toctree::

   register-plugin
   register-message
   log-message

Design
""""""

To allow 3rd-party plugins to add support for *WPf2b* more easily, the API uses actions. This avoids the need to check if *WPf2b* is installed, then import a file, check for versions, and so on. Integration code can be written that will work if *WPf2b* is installed, and do nothing if not.

.. note:: Because ``do_action`` has no return value *WPf2b* will throw an Exception if there is an error.

