#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include "constants.h"
#include "Animation.h"

class Character{
private:
    SDL_Surface *s_window;
    SDL_Rect m_posChar;
    Animation m_anim[4];
    int m_posX;
    int m_posY;
public:
    Character(){};
    void _init_(SDL_Surface *s_w, int x, int y, int w, int h);
    void update();
    void draw(int dir);
    int moveLeft(int walk);
    int moveRight(int walk);
    int moveTop(int walk);
    int moveDown(int walk);
};

#endif // CHARACTER_H_INCLUDED
