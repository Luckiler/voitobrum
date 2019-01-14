//
// Created by Lucas on 09/01/2019.
//

#include <v_window.h>
#include <cstdio>
#include "utilities.h"

v_window::v_window() {
    this->window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, DEFAULT_WINDOW_WIDTH,
                                    DEFAULT_WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    }
    else
    {
        this->screenSurface = SDL_GetWindowSurface( this->window );

        // For testing purposes
        {
            SDL_FillRect(this->screenSurface, nullptr, SDL_MapRGB(this->screenSurface->format, 0x00, 0xFF, 0x00));
            SDL_UpdateWindowSurface(this->window);
            SDL_Delay(2000);
        }
    }
}
