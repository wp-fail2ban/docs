.. highlight:: console

.. _configuration__mu-plugins:

`mu-plugins` Support
--------------------

There are two main reasons for using ``mu-plugins``:

#. Load |WPf2b| before another security plugin.
#. Prevent site administrators from disabling it.

Loading Early
^^^^^^^^^^^^^

One of the better ways is to install *WPf2b* as usual and then create a symlink in ``mu-plugins``:

::

    # ln -s ../plugins/wp-fail2ban/wp-fail2ban.php
    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> ../plugins/wp-fail2ban/wp-fail2ban.php

or for the Premium version:

::

    # ln -s ../plugins/wp-fail2ban-premium/wp-fail2ban.php
    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> ../plugins/wp-fail2ban-premium/wp-fail2ban.php

This has the advantage that you can update *WPf2b* as usual without having to update ``mu-plugins`` directly.  For the free version you don't need to activate *WPf2b*, but you do for the Premium version.

Forcing Usage
^^^^^^^^^^^^^

The main objective here is to stop people fiddling with things, so there are necessarily some restrictions on configuring *WPf2b*.

Configure |WPf2b| in ``wp-config.php`` when it is forced as an MU-plugin. The settings UI does not apply configuration in this deployment mode.

The actual configuration itself is simple; for the **Free** version:

#. Extract the **Free** version of *WPf2b* into a directory called `wp-fail2ban` within `mu-plugins`.
#. symlink ``wp-fail2ban.php``:

::

    # ln -s wp-fail2ban/wp-fail2ban.php
    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> wp-fail2ban/wp-fail2ban.php

3. **Keep** *WPf2b* **up-to-date**.

For the **Premium** version:

#. Extract the **Premium** version of *WPf2b* into a directory called `wp-fail2ban-premium` within `mu-plugins`.
#. symlink ``wp-fail2ban.php``:

::

    # ln -s wp-fail2ban-premium/wp-fail2ban.php
    # ls -l
    total 1
    lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> wp-fail2ban-premium/wp-fail2ban.php

3. **Keep** *WPf2b* **up-to-date**.

Keeping *WPf2b* up-to-date
""""""""""""""""""""""""""

WordPress does not check plugins installed directly under ``mu-plugins`` for updates. Monitor the selected distribution channel and install |WPf2b| updates manually.
