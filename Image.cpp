#include "Image.h"

void Image::_init_(SDL_Surface *s_w, char imgFile[])
{
    s_window = s_w;
    m_image = IMG_Load(imgFile);
}

void Image::update(){}

void Image::draw(SDL_Rect *pos)
{
    SDL_BlitSurface(m_image, NULL, s_window, pos);
}
