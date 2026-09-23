.. _feature-waf-delete-user:

User deletion protection
========================

An unauthorised user deletion can remove access and disrupt ownership of the user's content. A plugin can invoke that operation outside the usual administration screens, where the expected capability check may otherwise be absent. User deletion protection detects an operation attempted without the ``delete_users`` capability; the global WAF mode determines whether it is logged or blocked. When it is blocked, the account remains present and any access or content ownership associated with it is unchanged.

WAF event storage can also capture the request body and headers independently of the general extra-field controls; see :ref:`feature-waf` and :ref:`operating_event_storage`. The individual control is on the WAF tab in Advanced settings.

.. include:: ../autogen/join/feature-waf-delete-user.rst
   :end-before: Source
