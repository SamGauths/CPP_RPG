#include "Scenes.h"


Scenes::Scenes()
{
    scene = HOME_SCENE;
}

void Scenes::_init_(SDL_Surface *s_window)
{
    /// HOME SCENE
    m_home._init_(s_window);
    m_txtPress1._init_(s_window, "Made with SDL in C++", "arial.ttf", 20, 50, 10, 255, 255, 255);
    m_txtVersion._init_(s_window, "Test version [Sept 2019]", "arial.ttf", 12, 50, 40, 255, 255, 255);
    /// MENU SCENE
    m_mainMenu._init_(s_window);
    /// GAME SCENE
    m_game._init_(s_window);
    /// PAUSE SCENE
    pause._init_(s_window);
    /// INVENTORY SCENE
    inventory._init_(s_window);
}


int Scenes::update(SDL_Surface *s_window, SDL_Event *event)
{
    ev = event;
    e_handler.updateEvents(ev);
    while(SDL_PollEvent(ev))
    {
        if(e_handler.closeWindow()) /// Close the window
            return false;
        switch(scene)
        {
            case HOME_SCENE:
            /// SCENE 1
            if(e_handler.keyPress())
                scene = MENU_SCENE;
            break;
            case MENU_SCENE:
            /// SCENE 2
            if(e_handler.keyDown('1'))
                scene = HOME_SCENE;
            if(e_handler.keyDown('3'))
                scene = GAME_SCENE;
            break;
            case GAME_SCENE:
            /// SCENE 3
            if(e_handler.keyDown('a'))
                key[K_A] = true;
            if(e_handler.keyUp('a'))
                key[K_A] = false;
            if(e_handler.keyDown('d'))
                key[K_D] = true;
            if(e_handler.keyUp('d'))
                key[K_D] = false;
            if(e_handler.keyDown('w'))
                key[K_W] = true;
            if(e_handler.keyUp('w'))
                key[K_W] = false;
            if(e_handler.keyDown('s'))
                key[K_S] = true;
            if(e_handler.keyUp('s'))
                key[K_S] = false;
            if(e_handler.keyUp('p'))
                scene = PAUSE_SCENE;
            if(e_handler.keyUp('i'))
                scene = INVENTORY_SCENE;
            break;

            case PAUSE_SCENE:
            /// SCENE 4
             if(e_handler.keyUp('b'))
                scene = GAME_SCENE;
            break;
            case INVENTORY_SCENE:
            /// SCENE 4
             if(e_handler.keyUp('b'))
                scene = GAME_SCENE;
            break;
        }
    }

    switch(scene)
    {
      case HOME_SCENE:
        m_home.update();
      break;
      case MENU_SCENE:
        m_mainMenu.update();
         break;
      case GAME_SCENE:
        m_game.update(key);
      break;
    }
    return true;
}


void Scenes::draw(SDL_Surface *s_window)
{
    switch(scene)
    {
     case HOME_SCENE:
       /// SCENE 1 (HOME)
       m_home.draw();
       m_txtPress1.draw();
       m_txtVersion.draw();
     break;
     case MENU_SCENE:
      /// SCENE 2 (MENU)
      m_mainMenu.draw();
      m_txtPress1.draw();
     break;
     case GAME_SCENE:
      /// SCENE 3 (GAME)
      m_game.draw();
     break;
     case PAUSE_SCENE:
      /// SCENE 4 (PAUSE)
      pause.draw();
     break;
     case INVENTORY_SCENE:
      /// SCENE 5 (INVENTORY)
      inventory.draw();
     break;
    }
}


