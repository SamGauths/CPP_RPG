#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED

#include <SDL.h>

class Timer{
private:
    int m_timerA;
    int m_timerB;
    int m_initTimer;
public:
    Timer(){};
    int getMilli();
    int getSec();
    int intervall(int *time, int intervall);
};

#endif // TIMER_H_INCLUDED
