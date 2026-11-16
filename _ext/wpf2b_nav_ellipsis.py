# -*- coding: utf-8 -*-
"""Shorten WP fail2ban constant names in HTML navigation labels only.

Replaces a leading ``WP_FAIL2BAN_ADDON``, ``WP_FAIL2BAN``, or ``WPF2B_EVENT``
prefix (matched longest-first) with a unicode ellipsis in the link text
produced by the Sphinx ``toctree`` / ``toc`` template helpers. Document
titles, page bodies, search entries, URLs, and anchors are left unchanged.

Shortened labels also receive the ``wpf2b-nav-ellipsis`` class so the RTD
sidebar keeps each entry on one line.
"""

from __future__ import annotations

import re
from typing import Callable

# Longest prefix first so ADDON constants are not shortened as WP_FAIL2BAN_…
_PREFIXES = (
    'WP_FAIL2BAN_ADDON',
    'WP_FAIL2BAN',
    'WPF2B_EVENT',
)

_NAV_CLASS = 'wpf2b-nav-ellipsis'

# Only rewrite plain-text <a>…</a> labels that start with a known prefix.
_NAV_LINK = re.compile(
    r'(<a\b[^>]*>)((?:WP_FAIL2BAN(?:_ADDON)?|WPF2B_EVENT)(?:_[A-Z0-9]+)*)(</a>)'
)


def shorten_constant_nav_label(text: str) -> str:
    """Return *text* with a leading constant prefix replaced by ``…``."""
    for prefix in _PREFIXES:
        if text == prefix or text.startswith(prefix + '_'):
            return '…' + text[len(prefix):]
    return text


def _with_nav_class(open_tag: str) -> str:
    """Ensure *open_tag* includes the nowrap marker class."""
    if f' {_NAV_CLASS}' in open_tag or f'"{_NAV_CLASS}' in open_tag:
        return open_tag
    if 'class="' in open_tag:
        return open_tag.replace('class="', f'class="{_NAV_CLASS} ', 1)
    if "class='" in open_tag:
        return open_tag.replace("class='", f"class='{_NAV_CLASS} ", 1)
    return open_tag[:-1] + f' class="{_NAV_CLASS}">'


def shorten_nav_html(html: str) -> str:
    """Rewrite matching constant labels inside rendered TOC HTML."""

    def _replace(match: re.Match[str]) -> str:
        open_tag, text, close_tag = match.group(1), match.group(2), match.group(3)
        short = shorten_constant_nav_label(text)
        if short == text:
            return match.group(0)
        return _with_nav_class(open_tag) + short + close_tag

    return _NAV_LINK.sub(_replace, html)


def _wrap_toc_helper(helper: Callable[..., str]) -> Callable[..., str]:
    def wrapped(*args, **kwargs) -> str:
        return shorten_nav_html(helper(*args, **kwargs))

    return wrapped


def _on_html_page_context(app, pagename, templatename, context, doctree):
    del app, pagename, templatename, doctree
    for key in ('toctree', 'toc'):
        helper = context.get(key)
        if callable(helper):
            context[key] = _wrap_toc_helper(helper)


def setup(app):
    app.connect('html-page-context', _on_html_page_context)
    app.add_css_file('wpf2b-nav-ellipsis.css')
    return {
        'version': '1.1.0',
        'parallel_read_safe': True,
        'parallel_write_safe': True,
    }
