#ifndef FONTTEXT_H_INCLUDED
#define FONTTEXT_H_INCLUDED

#include "constants.h"

class FontText{
private:
    SDL_Surface *s_window;
    SDL_Surface *m_text;
    SDL_Rect m_posTxt;
    TTF_Font *font = NULL;
    SDL_Color text_color;
public:
    FontText(){};
    void _init_(SDL_Surface *s_w, char txt[], char fontName[], int fontSize, int x, int y, int r, int g, int b);
    void update();
    void draw();
};

#endif // FONTTEXT_H_INCLUDED
