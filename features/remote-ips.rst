.. _feature-remote-ips:

Remote IPs and proxies
======================

Everything that decides **which IP** |WPf2b| logs and bans. Ignore-list is here because it keys off that resolved IP — but a match skips the **entire** Free+Premium chain, not merely logging.

Jetpack is documented once, here (managed IPs + cron). XML-RPC blocking *uses* the list; see :ref:`feature-xmlrpc`. MaxMind / geolocation method are **not** here; they belong to :ref:`feature-country-blocking`.

.. toctree::
   :maxdepth: 1

   remote-addr
   trusted-proxies
   cloudflare
   jetpack
   ignore-list
