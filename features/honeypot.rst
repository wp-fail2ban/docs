.. _feature-honeypot:

Honeypot
========

Premium, experimental. Injects Disallow paths into ``robots.txt`` and treats requests to those paths as hostile (hard). The path list is filterable (``wp_fail2ban_honeypot_robots_txt_trap_paths``).

``HONEYPOT_ERROR`` reports a problem while processing the honeypot and is not an attack signature.

The :ref:`quickstart_honeypot` card enables the trap and its ``robots.txt`` entries. The individual controls are on the Block tab in Advanced settings.

.. include:: ../autogen/join/feature-honeypot.rst
   :end-before: Source
