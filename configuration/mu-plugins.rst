.. _configuration__mu-plugins:

`mu-plugins` Support
--------------------

There are two main reasons for using `mu-plugins`:

#. You need to load *WPf2b* before other security plugins [#f1]_,
#. You don't trust the site administrators.

Loading Early
^^^^^^^^^^^^^

One of the better ways is to install *WPf2b* as usual and then create a symlink in ``mu-plugins``:

.. code-block:: sh

    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> ../plugins/wp-fail2ban/wp-fail2ban.php

or for the Premium version:

.. code-block:: sh

    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> ../plugins/wp-fail2ban-premium/wp-fail2ban.php

This has the advantage that you can update *WPf2b* as usual without having to update ``mu-plugins`` directly.  For the free version you don't need to activate *WPf2b*, but you do for the Premium version.

Forcing Usage
^^^^^^^^^^^^^

The main objective here is to stop people fiddling with things, so there are necessarily some restrictions on configuring *WPf2b*.

*WPf2b* must be configured in ``wp-config.php`` - you can't use the Premium config UI; not only does it make no sense, it won't work [#f2]_.

The actual configuration itself is simple; for the **Free** version:

#. Extract the **Free** version of *WPf2b* into a directory called `wp-fail2ban` within `mu-plugins`.
#. symlink ``wp-fail2ban.php``:

.. code-block:: sh

    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> wp-fail2ban/wp-fail2ban.php

3. **Keep** *WPf2b* **up-to-date**.

For the **Premium** version:

#. Extract the **Premium** version of *WPf2b* into a directory called `wp-fail2ban-premium` within `mu-plugins`.
#. symlink ``wp-fail2ban.php``:

.. code-block:: sh

    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> wp-fail2ban-premium/wp-fail2ban.php

3. **Keep** *WPf2b* **up-to-date**.

Keeping *WPf2b* up-to-date
""""""""""""""""""""""""""

It's that last step that catches out most people - WordPress doesn't check ``mu-plugins`` for updates, so by configuring *WPf2b* in this way **you are taking responsibility** for keeping *WPf2b* up-to-date. I do my best, but I cannot guarantee there will never be a critical problem with *WPf2b* - you and you alone are responsible for checking for updates and installing them.


.. rubric:: Footnotes

.. [#f1] For example, WordFence, which assumes it's the only one.
.. [#f2] It may look like it works now, but in a future release it will be blocked.

