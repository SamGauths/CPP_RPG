#include "Pause.h"


void Pause::_init_(SDL_Surface *s_w)
{
    s_window = s_w;
    m_txtPause._init_(s_window, "PAUSE", "arialbd.ttf", 20, (640/2)-30, (480/2)-(20/2), 255, 255, 255);
}

void Pause::update(){}

void Pause::draw()
{
    m_txtPause.draw();
}
