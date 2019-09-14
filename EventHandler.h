#ifndef EVENTHANDLER_H_INCLUDED
#define EVENTHANDLER_H_INCLUDED

#include <SDL.h>

class EventHandler{
private:
    SDL_Event *ev;
public:
    EventHandler(){};
    int updateEvents(SDL_Event *event);
    int closeWindow();
    int keyDown(int key_code);
    int keyUp(int key_code);
    int keyPress();
    int keyRelease();
};

#endif // EVENTHANDLER_H_INCLUDED
