#include "utilities.h"
#include "Character.h"

void Character::_init_(SDL_Surface *s_w, int x, int y, int w, int h)
{
    s_window = s_w;
    initPosition(&m_posChar, x,y,w,h);
    m_posX = x;
    m_posY = y;
    m_anim[0]._init_(s_window, "test9.png", m_posChar.x, m_posChar.y, 0, 0, 36, 50, 500, 1, false);
    m_anim[1]._init_(s_window, "test10.png", m_posChar.x, m_posChar.y, 0, 0, 36, 50, 500, 1, false);
    m_anim[2]._init_(s_window, "test11.png", m_posChar.x, m_posChar.y, 0, 0, 36, 50, 500, 1, false);
    m_anim[3]._init_(s_window, "test12.png", m_posChar.x, m_posChar.y, 0, 0, 36, 50, 500, 1, false);

}


void Character::update()
{
    _init_(s_window, m_posX, m_posY, 36, 50);
}


void Character::draw(int dir)
{
    update();

    if(dir == DOWN)
       m_anim[DOWN].draw();
    else if(dir == UP)
       m_anim[UP].draw();
    else if(dir == LEFT)
       m_anim[LEFT].draw();
    else if(dir == RIGHT)
       m_anim[RIGHT].draw();
}


int Character::moveLeft(int walk)
{
    if(walk || m_posX >((640/2)-36/2))
        m_posX -= 1;

    return m_posX;
}

int Character::moveRight(int walk)
{
    if(walk || m_posX <((640/2)-36/2))
        m_posX += 1;

    return m_posX;
}

int Character::moveTop(int walk)
{
    if(walk || m_posY >((480/2)-50/2))
        m_posY -= 1;

    return m_posY;
}

int Character::moveDown(int walk)
{
    if(walk || m_posY <((480/2)-50/2))
        m_posY += 1;

    return m_posY;
}


