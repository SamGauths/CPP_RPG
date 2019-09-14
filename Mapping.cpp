#include "utilities.h"
#include "Mapping.h"


void Mapping::_init_(SDL_Surface *s_w, char fileName[50], int mapWidth, int mapHeight)
{
    s_window = s_w;
    m_tile[0] = IMG_Load("tile1.bmp");
    m_tile[1] = IMG_Load("tile2.bmp");
    m_tile[2] = IMG_Load("tile3.bmp");
    m_tile[3] = IMG_Load("tile4.bmp");
    m_tile[4] = IMG_Load("tile5.bmp");
    m_tile[5] = IMG_Load("tile6.bmp");
    m_tile[6] = IMG_Load("tile7.bmp");
    initPosition(&m_posTiles, 0, 0, 32, 32);
    m_file = fopen(fileName, "r");
    m_i = 0;
    m_j = 0;
    m_xPos = 0;
    m_yPos = 0;
    m_width = mapWidth;
    m_height = mapHeight;
    m_i2 = 0;
    m_j2 = 0;
    m_limitWidth = 100;
    m_limitHeight = 30;
}


void Mapping::update(){}


void Mapping::draw()
{
    fgets(m_lineFile, m_width * m_height + 1, m_file);
    for (m_i = 0 ; m_i < m_width; m_i++)
    {
      for (m_j = 0 ; m_j < m_height; m_j++)
      {
        m_posTiles.x = m_i * SIZE_BLOCK + m_xPos; // X position of a block
        m_posTiles.y = m_j * SIZE_BLOCK + m_yPos; // Y position of a block

        switch(m_lineFile[(m_i * m_height) + m_j])
        {
            case '0':
                /// EMPTY BLOCK
                break;
            case '1':
                SDL_BlitSurface(m_tile[0], NULL, s_window, &m_posTiles);
                break;
            case '2':
                SDL_BlitSurface(m_tile[1], NULL, s_window, &m_posTiles);
                break;
            case '3':
                SDL_BlitSurface(m_tile[2], NULL, s_window, &m_posTiles);
                break;
            case '4':
                SDL_BlitSurface(m_tile[3], NULL, s_window, &m_posTiles);
                break;
            case '5':
                SDL_BlitSurface(m_tile[4], NULL, s_window, &m_posTiles);
                break;
            case '6':
                SDL_BlitSurface(m_tile[5], NULL, s_window, &m_posTiles);
                break;
            case '7':
                SDL_BlitSurface(m_tile[6], NULL, s_window, &m_posTiles);
                break;
        }
      }
    }
}



void Mapping::draw2()
{
    SDL_FillRect(s_window, &m_posTiles, SDL_MapRGB(s_window->format, 0, 0, 0));
    for (m_j = 0; m_j < 30; m_j++)
    {
      for (m_i = 0; m_i < 100; m_i++)
      {
        m_posTiles.x = m_i * SIZE_BLOCK + m_xPos; // X position of a block
        m_posTiles.y = m_j * SIZE_BLOCK + m_yPos; // Y position of a block

        switch(m_map2[m_j][m_i])
        {
            case '0':
                /// EMPTY BLOCK
                break;
            case '1':
                SDL_BlitSurface(m_tile[0], NULL, s_window, &m_posTiles);
                break;
            case '2':
                SDL_BlitSurface(m_tile[1], NULL, s_window, &m_posTiles);
                break;
            case '3':
                SDL_BlitSurface(m_tile[2], NULL, s_window, &m_posTiles);
                break;
            case '4':
                SDL_BlitSurface(m_tile[3], NULL, s_window, &m_posTiles);
                //SDL_FillRect(s_window, &m_posTiles, SDL_MapRGB(s_window->format, 255, 0, 0));
                break;
            case '5':
                SDL_BlitSurface(m_tile[4], NULL, s_window, &m_posTiles);
                //SDL_FillRect(s_window, &m_posTiles, SDL_MapRGB(s_window->format, 0, 255, 0));
                break;
            case '6':
                SDL_BlitSurface(m_tile[5], NULL, s_window, &m_posTiles);
                //SDL_FillRect(s_window, &m_posTiles, SDL_MapRGB(s_window->format, 0, 0, 255));
                break;
            case '7':
                SDL_BlitSurface(m_tile[6], NULL, s_window, &m_posTiles);
                break;
        }
      }
    }
}


int Mapping::scrollLeft(int speed)
{
    if(m_xPos < 0){
        m_xPos += speed;
        return 0;
    }
    else
        return 1;
}

int Mapping::scrollRight(int speed)
{
    if(m_xPos > -2560){
        m_xPos -= speed;
        return 0;
    }
    else
        return 1;
}

int Mapping::scrollUp(int speed)
{
    if(m_yPos < 0)
    {
        m_yPos += speed;
        return 0;
    }
    else
        return 1;
}

int Mapping::scrollDown(int speed)
{
    if(m_yPos > -480)
    {
        m_yPos -= speed;
        return 0;
    }
    else
        return 1;
}





