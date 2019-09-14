#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED

#include "constants.h"

class Animation{
private:
    SDL_Surface *s_window;
    SDL_Surface *m_anim;
    SDL_Rect m_posAnim;
    SDL_Rect m_posRectAnim;
    bool m_spriteBox;
    int m_speed;
    int m_nbFrames;
public:
    Animation(){};
    void _init_(SDL_Surface *s_w, char imgFile[100], int x, int y, int x2, int y2, int wRect, int hRect, int speedAnim, int frames, bool box);
    void update();
    void draw();
    void getPosition(int x, int y);
};

#endif // ANIMATION_H_INCLUDED
