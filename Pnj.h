#ifndef PNJ_H_INCLUDED
#define PNJ_H_INCLUDED

#include "constants.h"
#include "FontText.h"
#include "Animation.h"

class Pnj{
private:
    SDL_Surface *s_window;
    SDL_Rect m_posPng;
    Animation anim_front;
    int timeA;
    int timeB;
public:
    Pnj(){};
    void _init_(SDL_Surface *s_w, int x, int y);
    void update(int mapx, int mapy);
    void draw(SDL_Rect pos);
};

#endif // PNJ_H_INCLUDED
