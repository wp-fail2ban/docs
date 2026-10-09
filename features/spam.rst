.. _feature-spam:

Spam
====

Spam logging gives fail2ban the spammer's IP address in a message that can match the hard filter. A jail can then count repeated spam and respond according to its configured policy. |WPf2b| writes the message after WordPress, a moderator, or a spam-detection plugin marks a comment as spam; it does not decide whether the comment is spam.

Comments are covered whether they are identified as spam when received or marked later. Premium also records comments discarded by Akismet.

The message uses the IP address stored with the comment, not the address of the moderator who marked it. That address is only as accurate as the site's client-address handling: if WordPress stored a shared proxy address, a later ban can affect unrelated traffic through the proxy. See :ref:`feature-remote-addr`.

The :ref:`quickstart_spam_protection` card enables logging. The individual control appears on the Logging tab in Advanced settings and is read-only in Free.

.. include:: ../autogen/join/feature-spam.rst
   :end-before: Source
