#include "utilities.h"

void initPosition(SDL_Rect *pos, int x, int y, int w, int h)
{
    pos->x = x;
    pos->y = y;
    pos->w = w;
    pos->h = h;
}
