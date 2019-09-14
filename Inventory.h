#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

#include "constants.h"
#include "FontText.h"

class Inventory{
private:
    SDL_Surface *s_window;
    SDL_Rect m_posBkg;
public:
    Inventory(){};
    void _init_(SDL_Surface *s_w);
    void update();
    void draw();
};


#endif // INVENTORY_H_INCLUDED
