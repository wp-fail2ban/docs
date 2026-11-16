# -*- coding: utf-8 -*-
"""Shorten WP fail2ban constant names in HTML navigation labels only.

Replaces a leading ``WP_FAIL2BAN_ADDON`` or ``WP_FAIL2BAN`` prefix (matched
longest-first) with a unicode ellipsis in the link text produced by the
Sphinx ``toctree`` / ``toc`` template helpers. Document titles, page bodies,
search entries, URLs, and anchors are left unchanged.
"""

from __future__ import annotations

import re
from typing import Callable

# Longest prefix first so ADDON constants are not shortened as WP_FAIL2BAN_…
_PREFIXES = (
    'WP_FAIL2BAN_ADDON',
    'WP_FAIL2BAN',
)

# Only rewrite plain-text <a>…</a> labels that start with a constant prefix.
_NAV_LINK = re.compile(
    r'(<a\b[^>]*>)(WP_FAIL2BAN(?:_ADDON)?(?:_[A-Z0-9]+)*)(</a>)'
)


def shorten_constant_nav_label(text: str) -> str:
    """Return *text* with a leading constant prefix replaced by ``…``."""
    for prefix in _PREFIXES:
        if text == prefix or text.startswith(prefix + '_'):
            return '…' + text[len(prefix):]
    return text


def shorten_nav_html(html: str) -> str:
    """Rewrite matching constant labels inside rendered TOC HTML."""

    def _replace(match: re.Match[str]) -> str:
        return match.group(1) + shorten_constant_nav_label(match.group(2)) + match.group(3)

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
    return {
        'version': '1.0.0',
        'parallel_read_safe': True,
        'parallel_write_safe': True,
    }
