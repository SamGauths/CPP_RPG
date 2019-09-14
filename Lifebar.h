#ifndef LIFEBAR_H_INCLUDED
#define LIFEBAR_H_INCLUDED

#include "constants.h"

class Lifebar{
private:
    SDL_Surface *s_window;
    SDL_Rect m_posBar1;
    SDL_Rect m_posBar2;
    int color1[3];
    int color2[3];
    int health;
public:
    Lifebar(){};
    void _init_(SDL_Surface *s_w, int x, int y, int w, int h, int r1, int g1, int b1, int r2, int g2, int b2);
    void update();
    void draw();
};

#endif // LIFEBAR_H_INCLUDED
