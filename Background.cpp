#include "Background.h"


void Background::_init_(SDL_Surface *s_w, char imgFile[100], int x, int y, int w, int h)
{
    s_window = s_w;
    m_bkg = IMG_Load(imgFile);
    initPosition(&m_posBkg, x,y,w,h);
    m_xScroll = 640/2;
    m_i = 0;
}


void Background::update()
{   m_xScroll = m_i;
    m_posBkg.x = m_xScroll;
}


void Background::draw()
{
    SDL_FillRect(s_window, &m_posBkg, SDL_MapRGB(s_window->format, 255, 0, 0));
    SDL_BlitSurface(m_bkg, NULL, s_window, &m_posBkg);
}


void Background::scrollLeft()
{
    m_i--;
}


void Background::scrollRight()
{
    m_i++;
}
