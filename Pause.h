#ifndef PAUSE_H_INCLUDED
#define PAUSE_H_INCLUDED

#include "constants.h"
#include "FontText.h"

class Pause{
private:
    SDL_Surface *s_window;
    FontText m_txtPause;
public:
    Pause(){};
    void _init_(SDL_Surface *s_w);
    void update();
    void draw();
};

#endif // PAUSE_H_INCLUDED
