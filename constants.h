#ifndef CONSTANTS_H_INCLUDED
#define CONSTANTS_H_INCLUDED


/// INCLUDES
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

/// CONSTANTS
#define WINDOW_W 640
#define WINDOW_H 480
/// Map.cpp
#define SIZE_BLOCK 32
#define NUM_BLOCKS_WIDTH 20
#define NUM_BLOCKS_HEIGHT 15
#define SPEED_SCROLL 4

enum {HOME_SCENE, MENU_SCENE, GAME_SCENE, PAUSE_SCENE, INVENTORY_SCENE}; // All the different scenes
enum {NO_SCROLL, SCROLL_LEFT, SCROLL_RIGHT}; // Scrolling movements
enum{DOWN, UP, LEFT, RIGHT}; // Directions
enum{K_W, K_A, K_S, K_D}; // Keys


/// MACROS
#define INIT() freopen("CON", "w", stdout);\
               freopen("CON", "r", stdin);\
               freopen("CON", "w", stderr);\
               SDL_Init(SDL_INIT_VIDEO);\
               TTF_Init();

#define CLEAR() TTF_Quit();\
                IMG_Quit();\
                SDL_Quit();


#endif // CONSTANTS_H_INCLUDED
