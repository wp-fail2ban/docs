.. _feature-remote-ips:

Remote IPs and proxies
======================

Host firewalls normally block malicious traffic by IP address. |WPf2b| therefore associates activity seen inside WordPress with the address of the visitor that caused it. It writes this resolved client address into log messages and Premium events, and address-based features use it too. If the activity warrants a ban, fail2ban can then give the same address to the host firewall.

On a direct connection, the web server normally sees the visitor's address. When a reverse proxy or service such as Cloudflare sits in front of WordPress, it sees the intermediary instead. Unless |WPf2b| recovers the visitor's address, a later ban targets that shared intermediary: banning one stable proxy can disconnect the site, while banning addresses from a large pool can make access fail intermittently.

The pages in this section explain how |WPf2b| chooses the resolved address, how trusted-proxy and Cloudflare configuration recover an address supplied through ``X-Forwarded-For``, how Jetpack sources are recognised, and how the Premium Ignore List exempts selected addresses. Country lookup and blocking are described separately under :ref:`feature-country-blocking`.

.. toctree::
   :maxdepth: 1

   remote-addr
   trusted-proxies
   cloudflare
   jetpack
   ignore-list
