static const char *background_color = "#000000";
static const char *border_color = "#99991c";
static const char *font_color = "#ffffff";
static const char *font_pattern = "monospace:size=14";
static const unsigned line_spacing = 9;
static const unsigned int padding = 10;

static const unsigned int width = 350;
static const unsigned int border_size = 2;
static const unsigned int pos_x = 30;
static const unsigned int pos_y = 60;

enum corners { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };
enum corners corner = TOP_LEFT;

static const unsigned int duration = 3; /* in seconds */

#define DISMISS_BUTTON Button1
#define ACTION_BUTTON Button3
