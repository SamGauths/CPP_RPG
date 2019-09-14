#include "Timer.h"


int Timer::getMilli(){
    return SDL_GetTicks();
}

int Timer::getSec(){
    return SDL_GetTicks()/1000;
}

int Timer::intervall(int *time, int intervall){
    if(m_initTimer == false){
        m_timerB = *time;
        m_initTimer = true;
    }
    if(*time - m_timerB > intervall){
     m_timerB = *time;
     m_initTimer = false;
     return 1;
    }
    return 0;
}
