#include "utilities.h"
#include "menu.h"

void Menu::_init_(SDL_Surface *s_w)
{
    s_window = s_w;
    initPosition(&m_posBkg, 0,0,640,480);
    m_timeA = 0;
    m_timeB = 0;
    m_timeA2 = 0;
    m_timeB2 = 0;
    m_txt1._init_(s_window, "Press [3] to play", "ariblk.ttf", 20, 50, 400, 255, 255, 255);
    m_mapMenu._init_(s_window, "map_menu.txt", 100, 15);
}

void Menu::update()
{
    m_timeA = SDL_GetTicks();
    m_timeA2 = SDL_GetTicks();
    if(m_timeA - m_timeB > 12)
    {
     m_mapMenu.scrollRight(1);
     m_timeB = m_timeA;
    }
}

void Menu::draw()
{
    if(m_timeA2 - m_timeB2 < 1000)
    {
     SDL_FillRect(s_window, &m_posBkg, SDL_MapRGB(s_window->format, 0, 0, 0));
     m_mapMenu.draw();
     m_txt1.draw();
    }
    else if(m_timeA2 - m_timeB2 > 999 && m_timeA2 - m_timeB2 < 2000)
    {
     SDL_FillRect(s_window, &m_posBkg, SDL_MapRGB(s_window->format, 0, 0, 0));
     m_mapMenu.draw();
    }
    else if(m_timeA2 - m_timeB2 > 1999)
    {
     SDL_FillRect(s_window, &m_posBkg, SDL_MapRGB(s_window->format, 0, 0, 0));
     m_mapMenu.draw();
     m_txt1.draw();
     m_timeB2 = m_timeA2;
    }
}
