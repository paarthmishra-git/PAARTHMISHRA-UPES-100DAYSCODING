"""
Regenerates docs/banner.svg and docs/grid.svg for the 100 Days of C README.

Every day:  1) change DAYS (and LATEST) below
            2) run:  python make_assets.py
            3) commit docs/banner.svg and docs/grid.svg
"""
import os

# ---------------- edit these ----------------
DAYS = 43            # days completed so far
LATEST = "strings"   # topic of the latest day
SKIPPED = 0          # days skipped
TOTAL = 100
# --------------------------------------------

ANIM = os.environ.get("STATIC") != "1"   # STATIC=1 gives a non-animated preview
HERE = os.path.dirname(os.path.abspath(__file__))
OUT = os.environ.get("OUT") or os.path.join(HERE, "docs")
os.makedirs(OUT, exist_ok=True)

FONT = "'SFMono-Regular', Consolas, 'Liberation Mono', Menlo, monospace"
BG, PANEL, LINE = "#0d1117", "#161b22", "#30363d"
TXT, DIM, GREEN, AMBER, BLUE = "#c9d1d9", "#8b949e", "#3fb950", "#d29922", "#58a6ff"
DUR = 12  # seconds per banner loop


def fade(t0):
    """Opacity animation: hidden, appears at t0, holds, fades out, loops."""
    if not ANIM:
        return ""
    return (f'<animate attributeName="opacity" dur="{DUR}s" repeatCount="indefinite" '
            f'values="0;0;1;1;0;0" keyTimes="0;{t0};{t0 + 0.02:.2f};0.94;0.98;1"/>')


def op():
    return 'opacity="0"' if ANIM else 'opacity="1"'


# =============================== BANNER ===============================
def banner():
    bar_w = 440
    fill_w = bar_w * DAYS / TOTAL
    pct = round(DAYS * 100 / TOTAL)

    wipe = ""
    cursor = ""
    if ANIM:
        wipe = ('<animate attributeName="width" dur="12s" repeatCount="indefinite" '
                'values="0;0;480;480;0" keyTimes="0;0.08;0.33;0.97;1"/>')
        cursor = ('<rect x="70" y="180" width="10" height="20" fill="#c9d1d9">'
                  '<animate attributeName="x" dur="12s" repeatCount="indefinite" '
                  'values="70;70;550;550;70" keyTimes="0;0.08;0.33;0.97;1"/>'
                  '<animate attributeName="opacity" dur="12s" repeatCount="indefinite" '
                  'values="1;1;1;0;0;1" keyTimes="0;0.08;0.33;0.34;0.99;1"/></rect>')
    bar_anim = ""
    if ANIM:
        bar_anim = (f'<animate attributeName="width" dur="12s" repeatCount="indefinite" '
                    f'values="0;0;{fill_w:.1f};{fill_w:.1f};0;0" keyTimes="0;0.36;0.50;0.94;0.98;1"/>')
    blink = ""
    if ANIM:
        blink = ('<animate attributeName="opacity" dur="1s" repeatCount="indefinite" '
                 'values="1;1;0;0" keyTimes="0;0.5;0.5;1" calcMode="discrete"/>')

    rows = [
        ("language", "C", BLUE, 0.40),
        ("streak", f"{DAYS} days, {SKIPPED} skipped", TXT, 0.44),
        ("latest", f"day {DAYS} · {LATEST}", TXT, 0.48),
        ("status", "in progress", GREEN, 0.52),
    ]
    row_svg = ""
    for i, (k, v, c, t0) in enumerate(rows):
        y = 258 + i * 24
        row_svg += (f'<g {op()}>{fade(t0)}'
                    f'<text x="48" y="{y}" font-size="16" fill="{DIM}">{k}</text>'
                    f'<text x="150" y="{y}" font-size="16" fill="{c}" font-weight="bold">{v}</text></g>\n')

    return f'''<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 900 396" width="900" height="396" role="img" aria-label="Terminal running the challenge program: {DAYS} of {TOTAL} days complete">
<defs><clipPath id="wipe"><rect x="70" y="176" height="28" width="{'0' if ANIM else '480'}">{wipe}</rect></clipPath></defs>
<g font-family="{FONT}">
<rect x="10" y="10" width="880" height="376" rx="14" fill="{BG}" stroke="{LINE}" stroke-width="2"/>
<path d="M10,54 V24 a14,14 0 0 1 14,-14 H876 a14,14 0 0 1 14,14 V54 Z" fill="{PANEL}"/>
<line x1="10" y1="54" x2="890" y2="54" stroke="{LINE}"/>
<circle cx="36" cy="32" r="6" fill="#ff5f56"/><circle cx="58" cy="32" r="6" fill="#ffbd2e"/><circle cx="80" cy="32" r="6" fill="#27c93f"/>
<text x="450" y="37" text-anchor="middle" font-size="14" fill="{DIM}">paarth@upes: ~/100-days-of-c</text>

<text x="48" y="118" font-size="46" font-weight="bold" fill="#e6edf3" letter-spacing="4">100 DAYS OF C</text>
<text x="48" y="148" font-size="16" fill="{DIM}">B.Tech CSE · UPES Dehradun · one commit a day, no skipped days</text>
<line x1="48" y1="166" x2="852" y2="166" stroke="{LINE}" stroke-dasharray="6 6"/>

<text x="48" y="198" font-size="18" fill="{GREEN}">$</text>
<text x="70" y="198" font-size="18" fill="{TXT}" clip-path="url(#wipe)">gcc challenge.c -o challenge &amp;&amp; ./challenge</text>
{cursor}

<g {op()}>{fade(0.36)}
<text x="48" y="228" font-size="16" fill="{DIM}">progress</text>
<rect x="150" y="216" width="{bar_w}" height="14" rx="7" fill="{PANEL}" stroke="{LINE}"/>
<rect x="150" y="216" width="{'0' if ANIM else f'{fill_w:.1f}'}" height="14" rx="7" fill="{GREEN}">{bar_anim}</rect>
<text x="606" y="228" font-size="16" fill="{TXT}" font-weight="bold">{DAYS}/{TOTAL}  ({pct}%)</text>
</g>
{row_svg}
<g {op()}>{fade(0.56)}
<text x="48" y="366" font-size="18" fill="{GREEN}">$</text>
<rect x="70" y="351" width="10" height="20" fill="{TXT}">{blink}</rect>
</g>
</g>
</svg>
'''


# ================================ GRID ================================
def grid():
    cw, ch, gap = 64, 40, 8
    gx, gy = 130, 104
    tiers = ["#0e4429", "#0f5132", "#006d32", "#1f883d", "#2ea043"]
    milestones = {10, 25, 50, 75, 100}
    cells = ""
    for d in range(1, TOTAL + 1):
        r, c = divmod(d - 1, 10)
        x, y = gx + c * (cw + gap), gy + r * (ch + gap)
        cx, cy = x + cw / 2, y + ch / 2 + 5
        if d < DAYS + 1 and d != DAYS:
            fill, stroke, tcol, dash = tiers[min(r, 4)], "none", "#ffffff", ""
        elif d == DAYS:
            fill, stroke, tcol, dash = AMBER, "none", BG, ""
        else:
            fill, stroke, tcol = PANEL, LINE, "#6e7681"
            dash = f' stroke-dasharray="4 3"' if d in milestones else ""
            if d in milestones:
                stroke = AMBER
        done = d <= DAYS
        begin = f"{0.2 + d * 0.03:.2f}s"
        anim = (f'<animate attributeName="opacity" from="0" to="1" begin="{begin}" dur="0.3s" fill="freeze"/>'
                if (ANIM and done) else "")
        o = ('opacity="0"' if (ANIM and done) else "")
        weight = ' font-weight="bold"' if d == DAYS else ""
        cells += (f'<g {o}>{anim}<rect x="{x}" y="{y}" width="{cw}" height="{ch}" rx="6" fill="{fill}" '
                  f'stroke="{stroke}" stroke-width="1.5"{dash}/>'
                  f'<text x="{cx}" y="{cy}" text-anchor="middle" font-size="15" fill="{tcol}"{weight}>{d}</text>')
        if d in milestones:
            cells += f'<circle cx="{x + cw - 9}" cy="{y + 9}" r="3.5" fill="{AMBER}"/>'
        cells += '</g>\n'
        if d == DAYS and ANIM:
            cells += (f'<rect x="{x - 3}" y="{y - 3}" width="{cw + 6}" height="{ch + 6}" rx="9" fill="none" '
                      f'stroke="{AMBER}" stroke-width="2"><animate attributeName="stroke-opacity" '
                      f'values="1;0.15;1" dur="1.8s" repeatCount="indefinite"/></rect>\n')

    labels = "".join(
        f'<text x="108" y="{gy + r * (ch + gap) + ch / 2 + 5}" text-anchor="end" font-size="13" fill="{DIM}">days[{r * 10}]</text>\n'
        for r in range(10))

    ly = gy + 10 * (ch + gap) + 22
    legend = (f'<rect x="130" y="{ly}" width="18" height="14" rx="3" fill="{tiers[2]}"/>'
              f'<text x="156" y="{ly + 12}" font-size="13" fill="{DIM}">written</text>'
              f'<rect x="236" y="{ly}" width="18" height="14" rx="3" fill="{AMBER}"/>'
              f'<text x="262" y="{ly + 12}" font-size="13" fill="{DIM}">today</text>'
              f'<rect x="326" y="{ly}" width="18" height="14" rx="3" fill="{PANEL}" stroke="{LINE}"/>'
              f'<text x="352" y="{ly + 12}" font-size="13" fill="{DIM}">uninitialized</text>'
              f'<circle cx="474" cy="{ly + 7}" r="3.5" fill="{AMBER}"/>'
              f'<text x="486" y="{ly + 12}" font-size="13" fill="{DIM}">milestone (10, 25, 50, 75, 100)</text>')
    H = ly + 40
    return f'''<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 900 {H}" width="900" height="{H}" role="img" aria-label="Grid of 100 days with {DAYS} completed">
<g font-family="{FONT}">
<rect x="10" y="10" width="880" height="{H - 20}" rx="14" fill="{BG}" stroke="{LINE}" stroke-width="2"/>
<text x="48" y="52" font-size="20" fill="{TXT}"><tspan fill="{BLUE}">int</tspan> days[{TOTAL}];</text>
<text x="48" y="78" font-size="15" fill="{DIM}">// {DAYS} written, {TOTAL - DAYS} uninitialized</text>
{labels}{cells}{legend}
</g>
</svg>
'''


with open(os.path.join(OUT, "banner.svg"), "w", encoding="utf-8") as f:
    f.write(banner())
with open(os.path.join(OUT, "grid.svg"), "w", encoding="utf-8") as f:
    f.write(grid())
print("wrote", OUT)
