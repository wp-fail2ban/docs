.. _feature-user-enumeration:

User enumeration
================

Blocks the classic ``?author=N`` and REST user-probe patterns so the login name cannot be harvested from the site. Hard failure. This is half of the Username Protection card (with :ref:`feature-email-only-login`).

It does not hide authors in feeds or HTML; it stops the WordPress user-enum endpoints |WPf2b| hooks.

In 6.3 this is on the Block tab.

.. include:: ../autogen/join/feature-user-enumeration.rst
