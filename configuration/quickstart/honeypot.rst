.. _quickstart_honeypot:

Honeypot
========

**Edition:** Premium. Experimental.

Advertises fake paths in ``robots.txt`` and treats requests to them as hostile. The canned set is the honeypot feature only: enable the trap, optionally the robots.txt entries, and the honeypot facility.

This is not a substitute for WAF or country blocking. It catches scanners that honour ``robots.txt`` Disallow lines. Expect noise if you already have those paths for real.

In 6.3 Advanced settings the honeypot controls are on the Block tab.

.. include:: ../../autogen/join/card-honeypot.rst

.. seealso::
   :ref:`feature-honeypot`
