.. _feature-waf-delete-user:

User deletion protection
========================

User deletion protection detects an attempt made without the ``delete_users`` capability. The global WAF mode determines whether the attempt is logged or blocked; when blocked, the account and its access and content ownership remain unchanged.

Plugins, and sometimes themes, can delete a user as one step in a larger operation. If that operation is not properly secured—for example, if an AJAX action lets request parameters select the user—an attacker may be able to make it delete an account of their choosing. Checking ``delete_users`` at the point of deletion catches this class of flaw even when the earlier operation omitted the check.

Remote code execution is a separate class of problem that |WPf2b|'s WAF does not currently attempt to handle. An attacker who can run arbitrary code inside WordPress can make a suitably privileged account the current user before requesting the deletion.

WAF event storage can also capture the request body and headers independently of the general extra-field controls; see :ref:`feature-waf` and :ref:`operating_event_storage`. The individual control is on the WAF tab in Advanced settings.

.. include:: ../autogen/join/feature-waf-delete-user.rst
   :end-before: Source
