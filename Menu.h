#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "constants.h"
#include "FontText.h"
#include "Mapping.h"

class Menu{
private:
    SDL_Surface *s_window;
    SDL_Rect m_posBkg;
    FontText m_txt1;
    Mapping m_mapMenu;
    int m_timeA;
    int m_timeB;
    int m_timeA2;
    int m_timeB2;
public:
    Menu(){};
    void _init_(SDL_Surface *s_w);
    void update();
    void draw();
};

#endif // MENU_H_INCLUDED
