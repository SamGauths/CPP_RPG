#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED

#include "constants.h"
#include "utilities.h"

class Background{
private:
    SDL_Surface *s_window;
    SDL_Surface *m_bkg;
    SDL_Rect m_posBkg;
    int m_xScroll;
    int m_i;
public:
    Background(){};
    void _init_(SDL_Surface *s_w, char imgFile[100], int x, int y, int w, int h);
    void update();
    void draw();
    void scrollLeft();
    void scrollRight();
};


#endif // BACKGROUND_H_INCLUDED
