#ifndef config_def_h_INCLUDED
#define config_def_h_INCLUDED

static const char *default_font = "Sans 20";
static const int transparency = 255;


struct clr_scheme scheme = {
  /* colors */
  .bg = {.bgra = {184, 184, 184, transparency}},
  .fg = {.bgra = {255, 255, 255, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.bgra = {0, 0, 0, transparency}},
};
struct clr_scheme scheme1 = {
  /* colors */
  .bg = {.bgra = {184, 184, 184, transparency}},
  .fg = {.bgra = {225, 225, 225, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.bgra = {0, 0, 0, transparency}},
};


struct clr_scheme scheme_orig = {
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {45, 45, 45, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.color = UINT32_MAX},
};
struct clr_scheme scheme1_orig = {
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {32, 32, 32, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.color = UINT32_MAX},
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
  Full, // First layout is the default layout on startup
  Special,   Emoji,  Simple,  SimpleGrid, Nav,      Dialer,
  Cyrillic,  Arabic, Persian, Greek,      Georgian,
  NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
  Landscape, // First layout is the default layout on startup
  Special,   Emoji, Nav, Greek,
  NumLayouts // signals the last item, may not be omitted
};

#endif // config_def_h_INCLUDED
