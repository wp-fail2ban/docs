.. _feature-spam:

Spam
====

Once WordPress, a moderator, or a spam-detection plugin classifies a submission as spam, that decision can provide useful source evidence for fail2ban. Spam logging exposes the classification so a configured jail can act on repeated results; |WPf2b| does not decide whether the submission is spam. :ref:`WP_FAIL2BAN_LOG_SPAM` enables the classification evidence as a whole. It covers comments stored as spam or later marked spam, including submissions through the classic form, REST, XML-RPC, pingbacks, and trackbacks. In Premium, the same control also covers comments discarded by Akismet.

The recorded address is the comment author's stored IP, not the address of the person who marked it spam. Spam messages can match the hard filter. If the stored address identifies a shared proxy rather than the original visitor, a later ban can affect unrelated traffic through the proxy; see :ref:`feature-remote-addr`. The :ref:`quickstart_spam_protection` card enables logging; the individual control appears on the Logging tab in Advanced settings and is read-only in Free.

.. include:: ../autogen/join/feature-spam.rst
   :end-before: Source
