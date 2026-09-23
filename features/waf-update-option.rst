.. _feature-waf-update-option:

Option protection
=================

An unexpected change to a core WordPress option can alter security or site-wide behaviour, including when plugin code attempts the change outside the normal settings screens. Option protection detects proposed changes made without the appropriate capability and, in blocking mode, prevents the protected value from changing. ``all`` protects every listed option; ``theme`` permits recognised image-size changes during ``after_setup_theme``, when themes normally configure themselves; ``disabled`` turns this individual check off. The global WAF mode determines whether a detected attempt is logged or blocked. A blocked update leaves the existing site-wide option value in place, so the caller's configuration change does not take effect.

The proposed option value can be stored in full with a WAF event, even when general request extra-field controls are off. That value may contain sensitive data; see :ref:`feature-waf` and :ref:`operating_event_storage`. The individual control is on the WAF tab in Advanced settings.

.. include:: ../autogen/join/feature-waf-update-option.rst
   :end-before: Source
