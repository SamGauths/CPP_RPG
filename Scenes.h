#ifndef SCENES_H_INCLUDED
#define SCENES_H_INCLUDED

#include <SDL.h>
#include "EventHandler.h"
#include "Home.h"
#include "FontText.h"
#include "Menu.h"
#include "Game.h"
#include "Pause.h"
#include "Inventory.h"

class Scenes{
private:
    /// GENERAL
    SDL_Surface *s_window;
    EventHandler e_handler;
    SDL_Event *ev;
    int scene;
    bool key[100];
    /// HOME SCENE
    Home m_home;
    FontText m_txtPress1;
    FontText m_txtVersion;
    /// MENU SCENE
    Menu m_mainMenu;
    /// GAME SCENE
    Game m_game;
    /// PAUSE SCENE
    Pause pause;
    /// INVENTORY SCENE
    Inventory inventory;
public:
    Scenes();
    void _init_(SDL_Surface *s_window);
    int update(SDL_Surface *s_window, SDL_Event *event);
    void draw(SDL_Surface *s_window);
};

#endif // SCENES_H_INCLUDED
