#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include "constants.h"
#include "Scenes.h"

class Window
{
public:
    SDL_Window *win;
    SDL_Surface *s_win;
    SDL_Event event;
    int init;
public:
    Window(const char title[100], int width, int height);
    int _init_();
    int update();
};

#endif // WINDOW_H_INCLUDED
