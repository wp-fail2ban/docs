.. _feature-trackbacks:

Trackbacks
==========

Trackbacks are stored as a comment type and emit ``OTHER_TRACKBACK`` events. Successful trackbacks are soft failures; rejected trackbacks are hard failures. There is no dedicated enable constant: they are logged when WordPress processes a trackback.

Pingbacks: :ref:`feature-pingbacks`.

.. include:: ../autogen/join/feature-trackbacks.rst
   :end-before: Source
