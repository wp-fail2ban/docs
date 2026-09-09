.. _quickstart_honeypot:

Honeypot
========

**Edition:** Premium. Experimental.

Selecting the card sets :ref:`WP_FAIL2BAN_EX_HONEYPOT` and :ref:`WP_FAIL2BAN_EX_HONEYPOT_ROBOTSTXT` to ``true``. |WPf2b| adds trap paths to ``robots.txt`` and treats requests to those paths as hard failures.

The card does not change the honeypot logging facility. It catches scanners that use ``robots.txt`` Disallow entries as a list of targets; ensure the configured paths do not serve real content.

If either setting is fixed to a conflicting value in ``wp-config.php``, the card cannot apply the complete configuration and Site Health reports the conflict. The equivalent individual controls are on the Block tab in Advanced settings.

.. include:: ../../autogen/join/card-honeypot.rst

.. seealso::
   :ref:`feature-honeypot`
