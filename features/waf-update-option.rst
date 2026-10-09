.. _feature-waf-update-option:

Option protection
=================

WordPress defines a list of sensitive options that control security and site-wide behaviour. Option protection uses that list and checks whether the current user is allowed to manage the affected site or network option. When a proposed change fails that check, blocking mode leaves the existing value in place.

Plugins and themes can change an option as one step in a larger operation. If that operation is not properly secured—for example, if an AJAX action lets request parameters select the option or its value—an attacker may be able to make it change a sensitive option of their choosing. Applying the permission check at the point of update catches this class of flaw even when the earlier operation omitted the check.

Remote code execution is a separate class of problem that |WPf2b|'s WAF does not currently attempt to handle. An attacker who can run arbitrary code inside WordPress can make a suitably privileged account the current user before changing the option.

``all`` protects every listed option; ``theme`` permits recognised image-size changes during ``after_setup_theme``, when themes normally configure themselves; ``disabled`` turns this individual check off. The global WAF mode determines whether a detected attempt is logged or blocked.

The proposed option value can be stored in full with a WAF event, even when general request extra-field controls are off. That value may contain sensitive data; see :ref:`feature-waf` and :ref:`operating_event_storage`. The individual control is on the WAF tab in Advanced settings.

.. include:: ../autogen/join/feature-waf-update-option.rst
   :end-before: Source
