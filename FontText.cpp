#include "FontText.h"

void FontText::_init_(SDL_Surface *s_w, char txt[], char fontName[], int fontSize, int x, int y, int r, int g, int b)
{
    s_window = s_w;
    m_posTxt.x = x;
    m_posTxt.y = y;

    font = TTF_OpenFont(fontName, fontSize);

    text_color = {r, g, b};

    m_text = TTF_RenderText_Blended(font, txt, text_color);
}


void FontText::update(){}


void FontText::draw()
{
    SDL_BlitSurface(m_text, NULL, s_window, &m_posTxt);
}
