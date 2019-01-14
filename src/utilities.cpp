//
// Created by Lucas on 09/01/2019.
//

#include <SDL2/SDL.h>
#include <cstdio>
#include "utilities.h"

bool sdl_initialized = false;

void init_sdl() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    } else {
        sdl_initialized = true;
    }
}