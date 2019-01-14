//
// Created by Lucas on 09/01/2019.
//

#ifndef VOITOBRUM_V_WINDOW_H
#define VOITOBRUM_V_WINDOW_H

#include <SDL2/SDL.h>

// virtual window class.
// Manages all SDL window related things
class v_window {
public:
    v_window();
protected:
    SDL_Window *window;
    SDL_Surface *screenSurface;
};


#endif //VOITOBRUM_V_WINDOW_H
