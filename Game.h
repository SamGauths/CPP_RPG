#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED



#include "EventHandler.h"
#include "Mapping.h"
#include "Home.h"
#include "Animation.h"
#include "Mapping.h"
#include "Background.h"
#include "Lifebar.h"
#include "Character.h"
#include "FontText.h"
#include "Image.h"
#include "Menu.h"
#include "Pause.h"
#include "Pnj.h"
#include "Inventory.h"

class Game{
private:
    SDL_Surface *s_window;
    /// GAME SCENE
    SDL_Rect m_posBkg;
    SDL_Rect m_posGold;
    SDL_Rect m_posBag;
    Character m_mainChar;
    FontText txt_lvl;
    FontText txt_exp;
    FontText txt_i;
    FontText txt_gold;
    FontText txt_health;
    Image img_gold;
    Image img_bag;
    Lifebar bar_exp;
    Lifebar bar_health;
    Mapping map3;
    int m_animation;
    int m_timeMoveA;
    int m_timeMoveB;
    int m_x;
    int m_y;
    int m_limitMap[4];
public:
    Game(){};
    void _init_(SDL_Surface *s_window);
    bool update(bool key[100]);
    void draw();
};


#endif // GAME_H_INCLUDED
