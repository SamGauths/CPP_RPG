#ifndef IMAGE_H_INCLUDED
#define IMAGE_H_INCLUDED

#include "constants.h"

class Image{
private:
    SDL_Surface *s_window;
    SDL_Surface *m_image;
public:
    Image(){};
    void _init_(SDL_Surface *s_w, char imgFile[]);
    void update();
    void draw(SDL_Rect *pos);
};

#endif // IMAGE_H_INCLUDED
