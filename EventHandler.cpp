#include "constants.h"
#include "EventHandler.h"

int EventHandler::updateEvents(SDL_Event *event){
    ev = event;
    if(ev->type == SDL_QUIT){
        return true;
    }
    return false;
}

int EventHandler::closeWindow(){
    if(ev->type == SDL_QUIT){
        return true;
    }
    return false;
}

int EventHandler::keyDown(int key_code){
    if(ev->type == SDL_KEYDOWN){
        if(ev->key.keysym.sym == key_code){
            return true;
        }
    }
    return false;
}

int EventHandler::keyUp(int key_code){
    if(ev->type == SDL_KEYUP){
        if(ev->key.keysym.sym == key_code){
            return true;
        }
    }
    return false;
}


int EventHandler::keyPress(){
    if(ev->type == SDL_KEYDOWN){
            return true;
    }
    return false;
}


int EventHandler::keyRelease(){
    if(ev->type == SDL_KEYUP){
            return true;
    }
    return false;
}

