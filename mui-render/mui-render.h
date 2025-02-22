#pragma once
#ifndef MUIRENDERH
#define MUIRENDERH
#include "../mui/mui.h"
#include "mui-icons.h"
#include "mui-render-options.h"
//////////////////////////////
#define FONT_FILE_NERD             "nerd"
#define FONT_FILE_SOURCECODEPRO    "sourcecodepro"
#define FONT_FILE_GLASSTTY         "glasstty"
#define FONT_FILE_IBMPLEX          "ibmplex"
#define FONT_FILE_INCONSOLATA      "inconsolata"
#define FONT_FILE_DEVICONS         "devicons"
#define FONT_FILE_FIRACODE         "firacode"
#define FONT_FILE_RETRO            "retro"
#define FONT_FILE_FROUFROU         "froufrou"
#define FONT_FILE_FONTAWESOME      "fontawesome"
#define FONT_FILE                  FONT_FILE_GLASSTTY ".ttf"
#define SDL_WINDOW_OPTIONS         SDL_WINDOW_ALLOW_HIGHDPI
#define IMG_PATH                   "/tmp/a.png"
#define CREATE_RENDERER            true
#define __SDL_WINDOW_HIDDEN
#define __SDL_WINDOW_ALWAYS_ON_TOP
#define __SDL_WINDOW_BORDERLESS
#ifdef WINDOW_HIDDEN
#undef __SDL_WINDOW_HIDDEN
#define __SDL_WINDOW_HIDDEN    | SDL_WINDOW_HIDDEN
#endif
#ifdef WINDOW_BORDERLESS
#undef __SDL_WINDOW_BORDERLESS
#define __SDL_WINDOW_BORDERLESS    | SDL_WINDOW_BORDERLESS
#define SDL_WINDOW_OPTIONS         SDL_WINDOW_OPTIONS | SDL_WINDOW_BORDERLESS
#endif
#ifdef WINDOW_ALWAYS_ON_TOP
#undef __SDL_WINDOW_ALWAYS_ON_TOP
#define __SDL_WINDOW_ALWAYS_ON_TOP    | SDL_WINDOW_ALWAYS_ON_TOP
#define SDL_WINDOW_OPTIONS            SDL_WINDOW_OPTIONS | SDL_WINDOW_ALWAYS_ON_TOP
#endif
#define BUFFER_SIZE                   16384
#include "../mui/mui.h"
typedef float    GLfloat;
typedef Uint8    GLubyte;
typedef Uint32   GLuint;
typedef enum {
  TextRenderSolid,
  TextRenderShaded,
  TextRenderBlended
} TextRenderMethod;
typedef struct {
  SDL_Texture *caption;
  SDL_Rect    captionRect;
  SDL_Texture *message;
  SDL_Rect    messageRect;
} _Scene;
enum {
  RENDER_LATIN1,
  RENDER_UTF8,
  RENDER_UNICODE
} rendertype;
struct mui_init_cfg_t {
  int  x_offset, y_offset;
  int  width, height;
  int  options;
  char *title;
  bool retain_initial_focus;
  char *terminal_content;
};
int term_cols, term_rows;
void r_init(struct mui_init_cfg_t CFG);
void r_draw_rect(mu_Rect rect, mu_Color color);
void r_draw_text(const char *text, mu_Vec2 pos, mu_Color color);
void r_draw_icon(int id, mu_Rect rect, mu_Color color);
int r_get_text_width(const char *text, int len);
int r_get_text_height(void);
void r_set_clip_rect(mu_Rect rect);
void r_clear(mu_Color color);
void r_transparent();
void r_present(void);
void render_terminal(struct mui_init_cfg_t CFG);

#endif
