.. _feature-user-enumeration:

User enumeration
================

Blocks the classic ``?author=N`` pattern and REST users probes so login names
cannot be harvested from the site. Unprivileged requests for the users list and
for an individual user by id are refused and logged as a hard failure. The
Username Protection card enables this with :ref:`feature-email-only-login`.

It does not hide author names exposed in feeds, themes, or page content.

The individual control is on the Block tab in Advanced settings.

.. include:: ../autogen/join/feature-user-enumeration.rst
   :end-before: Source
