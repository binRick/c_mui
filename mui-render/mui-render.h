#pragma once
//#include "../submodules/SDL_image/SDL_image.h"
#include "mui-render/mui-render-options.h"
#include "mui/mui.h"

void r_init(void);
void r_draw_rect(mu_Rect rect, mu_Color color);
void r_draw_text(const char *text, mu_Vec2 pos, mu_Color color);
void r_draw_icon(int id, mu_Rect rect, mu_Color color);
int r_get_text_width(const char *text, int len);
int r_get_text_height(void);
void r_set_clip_rect(mu_Rect rect);
void r_clear(mu_Color color);
void r_present(void);

