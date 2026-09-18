.. _feature-spam:

Spam
====

Logs comments WordPress has already marked as spam, including when they are stored that way (classic form, REST, XML-RPC, pingbacks, and trackbacks) and when an existing comment is later marked spam. The address recorded is the comment author's stored IP, not the address of whoever marked it spam. Premium also logs Akismet discards. |WPf2b| does not classify spam; it records the classification for fail2ban (hard).

The :ref:`quickstart_spam_protection` card enables spam logging. The individual control is on the Logging tab in Advanced settings.

.. include:: ../autogen/join/feature-spam.rst
   :end-before: Source
