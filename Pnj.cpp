#include "utilities.h"
#include "Pnj.h"


void Pnj::_init_(SDL_Surface *s_w, int x, int y)
{
    s_window = s_w;
    initPosition(&m_posPng, x, y, 50, 50);
    anim_front._init_(s_window, "png1_2.png", m_posPng.x, m_posPng.y, 0, 0, 22, 32, 500, 1, false);
}

void Pnj::update(int mapx, int mapy){}

void Pnj::draw(SDL_Rect pos)
{
    anim_front._init_(s_window, "png1_2.png", pos.x, pos.y, 0, 0, 22, 32, 500, 1, false);
    anim_front.draw();
}
