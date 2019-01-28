.. _premium:

=======
Premium
=======

.. _premium_event_ids:

Event IDs
---------

==================================  ==========  =====
Event                               ``action``  ``ref_id``
==================================  ==========  =====
Auth OK                             0x00010001  *(null)*
Auth Fail                           0x00010002  *(null)*
Blocked User [#f1]_                 0x00010004  *(null)*
Blocked User Enum [#f1]_            0x00010008  *(null)*

Comment                             0x00020000  ``comment_ID``
Comment: Spam                       0x00020001  ``comment_ID``
Comment: Post not found             0x00020002  ``post_ID``
Comment: Closed post                0x00020004  ``post_ID``
Comment: Trash post                 0x00020008  ``post_ID``
Comment: Draft post                 0x00020010  ``post_ID``
Comment: Password-protected post    0x00020020  ``post_ID``

Pingback                            0x00040001  *(null)*
Pingback error                      0x00040002  *(null)*
==================================  ==========  =====

.. rubric:: Footnotes

.. [#f1] These will change in v4.1.0.

