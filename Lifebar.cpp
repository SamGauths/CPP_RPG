#include "utilities.h"
#include "Lifebar.h"

void Lifebar::_init_(SDL_Surface *s_w, int x, int y, int w, int h, int r1, int g1, int b1, int r2, int g2, int b2)
{
    s_window = s_w;

    initPosition(&m_posBar1, x, y, w, h);
    m_posBar2 = m_posBar1;

    color1[0] = r1;
    color1[1] = g1;
    color1[2] = b1;

    color2[0] = r2;
    color2[1] = g2;
    color2[2] = b2;

    health = 75;

    m_posBar2.w = (m_posBar2.w/100)*health;
}

void Lifebar::update(){}

void Lifebar::draw()
{
    SDL_FillRect(s_window, &m_posBar1, SDL_MapRGB(s_window->format, color2[0], color2[1], color2[2]));
    SDL_FillRect(s_window, &m_posBar2, SDL_MapRGB(s_window->format, color1[0], color1[1], color1[2]));
}
