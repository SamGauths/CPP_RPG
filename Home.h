#ifndef HOME_H_INCLUDED
#define HOME_H_INCLUDED

#include "constants.h"
#include "FontText.h"

class Home{
private:
    SDL_Surface *s_window;
    SDL_Surface *m_bkg;
    SDL_Rect m_posBkg;
    SDL_Rect m_posLogo;
    FontText txtPressKey;
    bool displayTxt;
    int timeA;
    int timeB;
public:
    Home(){};
    void _init_(SDL_Surface *s_w);
    void update();
    void draw();
};

#endif // HOME_H_INCLUDED
