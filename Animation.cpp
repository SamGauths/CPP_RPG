#include "utilities.h"
#include "Animation.h"


void Animation::_init_(SDL_Surface *s_w, char imgFile[100], int x, int y, int x2, int y2, int wRect, int hRect, int speedAnim, int frames, bool box)
{
    s_window = s_w;
    m_anim = IMG_Load(imgFile);
    initPosition(&m_posAnim, x, y, wRect, hRect);
    initPosition(&m_posRectAnim, x2, y2, wRect, hRect);
    m_spriteBox = box;
    m_speed = speedAnim;
    m_nbFrames = frames;
}


int i = 0;
int ta1 = 0, ta2 = 0;
void Animation::update()
{
    ta1 = SDL_GetTicks();
    if(ta1 - ta2 > m_speed)
    {
        i++;
        if(i > m_nbFrames)
           i = 0;

        ta2 = ta1;
    }
    //pos_rect.x = pos_rect.w*3;
    m_posRectAnim.x = (m_posRectAnim.w*i);
}


void Animation::draw()
{
    update();
    if(m_spriteBox)
        SDL_FillRect(s_window, &m_posAnim, SDL_MapRGB(s_window->format, 0, 255, 0));

    SDL_BlitSurface(m_anim, &m_posRectAnim, s_window, &m_posAnim);
}


void  Animation::getPosition(int x, int y)
{
    m_posAnim.x = x;
    m_posAnim.y = y;
}



