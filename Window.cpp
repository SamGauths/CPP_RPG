#include "Window.h"

Scenes scenes;

Window::Window(const char title[100], int width, int height){
    win = SDL_CreateWindow(title, 100, 100, width, height, SDL_WINDOW_SHOWN);
    s_win = SDL_GetWindowSurface(win);
}


int Window::_init_()
{
    scenes._init_(s_win);
}


int Window::update(){
    while(scenes.update(s_win, &event))
    {
        scenes.update(s_win, &event);
        scenes.draw(s_win);
        SDL_UpdateWindowSurface(win);
    }
}
