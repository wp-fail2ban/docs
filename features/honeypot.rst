.. _feature-honeypot:

Honeypot
========

Premium, experimental. Injects Disallow paths into ``robots.txt`` and treats requests to those paths as hostile (hard). The path list is filterable (``wp_fail2ban_honeypot_robots_txt_trap_paths``).

``HONEYPOT_ERROR`` is diagnostic, not an attack signature.

In 6.3 this is on the Block tab. The Honeypot card enables this feature.

.. include:: ../autogen/join/feature-honeypot.rst
