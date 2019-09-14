#include "utilities.h"
#include "Home.h"


void Home::_init_(SDL_Surface *s_w)
{
    s_window = s_w;
    initPosition(&m_posBkg, 0, 0, 640, 480);
    initPosition(&m_posLogo, ((640/2)-(250/2)), (480*2), 640, 480);
    m_bkg = IMG_Load("logo.png");
    displayTxt = false;
    txtPressKey._init_(s_window, "Press any key to continue", "arialbd.ttf", 19, 195, 400, 46, 206, 109);
}


void Home::update()
{
    timeA = SDL_GetTicks();
    if(timeA - timeB > 7)
    {
     if(m_posLogo.y > ((480/2)-(250/2)))
     {
        m_posLogo.y --;
     }
     timeB = timeA;
    }
    if(m_posLogo.y <= ((480/2)-(250/2)))
        displayTxt = true;
}


void Home::draw()
{
    SDL_FillRect(s_window, &m_posBkg, SDL_MapRGB(s_window->format, 0, 0, 0));
    SDL_BlitSurface(m_bkg, NULL, s_window, &m_posLogo);
    if(displayTxt)
        txtPressKey.draw();
}
