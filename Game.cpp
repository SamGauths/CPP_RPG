#include "Game.h"


void Game::_init_(SDL_Surface *s_window)
{
    /// GAME SCENE
    initPosition(&m_posBkg, 0, 0, 640, 480);
    initPosition(&m_posGold, (640 - 45), 10, 35, 35);
    initPosition(&m_posBag, 0, (480-100), 100, 100);
    m_mainChar._init_(s_window, ((640/2)-36/2), ((480/2)-50/2), 36, 50);
    txt_lvl._init_(s_window, "LVL: 1", "ariblk.ttf", 20, 10, 5, 255, 255, 255);
    txt_exp._init_(s_window, "EXP:", "ariblk.ttf", 17, 10, 37, 255, 255, 255);
    txt_i._init_(s_window, "[ i ]", "arial.ttf", 18, 40, 380, 255, 255, 255);
    txt_gold._init_(s_window, "99", "arial.ttf", 18, 570, 18, 255, 255, 255);
    txt_health._init_(s_window, "HEALTH:", "ariblk.ttf", 17, 10, 71, 255, 255, 255);
    img_gold._init_(s_window, "gold3.png");
    img_bag._init_(s_window, "bag2.png");
    bar_exp._init_(s_window, 10, 64, 100, 5, 37, 222, 110, 222, 65, 37);
    bar_health._init_(s_window, 10, 98, 100, 5, 222, 79, 37, 255, 255, 255);
    map3._init_(s_window, "m2.txt", 100, 30);
    m_animation = 0;
    m_timeMoveA = 0;
    m_timeMoveB = 0;
    m_x = 0;
    m_y = 0;
}


bool Game::update(bool key[100])
{
    m_timeMoveA = SDL_GetTicks();
    if(m_timeMoveA - m_timeMoveB > 10)
    {
             if(key[K_A])
             {
              if(m_x == ((640/2)-36/2))
              {
               m_limitMap[LEFT] = map3.scrollLeft(1);
              }
              m_x = m_mainChar.moveLeft(m_limitMap[LEFT]);
              m_animation = LEFT;
             }
             if(key[K_D])
             {
              if(m_x == ((640/2)-36/2))
              {
               m_limitMap[RIGHT] = map3.scrollRight(1);
              }
              m_x = m_mainChar.moveRight(m_limitMap[RIGHT]);
              m_animation = RIGHT;
             }
             if(key[K_W])
             {
              if(m_y == ((480/2)-50/2))
              {
               m_limitMap[DOWN] = map3.scrollUp(1);
              }
              m_y = m_mainChar.moveTop(m_limitMap[DOWN]);
              m_animation = UP;
             }
             if(key[K_S])
             {
              if(m_y == ((480/2)-50/2))
              {
               m_limitMap[UP] = map3.scrollDown(1);
              }
              m_y = m_mainChar.moveDown(m_limitMap[UP]);
              m_animation = DOWN;
             }
        m_timeMoveB = m_timeMoveA;
    }
}


void Game::draw()
{
      ///map3.draw();
      map3.draw2();
      m_mainChar.draw(m_animation);
      txt_lvl.draw();
      txt_exp.draw();
      bar_exp.draw();
      txt_health.draw();
      bar_health.draw();
      img_gold.draw(&m_posGold);
      img_bag.draw(&m_posBag);
      txt_i.draw();
      txt_gold.draw();
}

