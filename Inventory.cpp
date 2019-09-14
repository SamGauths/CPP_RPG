#include "utilities.h"
#include "Inventory.h"

void Inventory::_init_(SDL_Surface *s_w)
{
    s_window = s_w;
    initPosition(&m_posBkg, 0, 0, (640/3), 480);
}

void Inventory::update(){}

void Inventory::draw()
{
    SDL_FillRect(s_window, &m_posBkg, SDL_MapRGB(s_window->format, 200, 200, 200));
}
