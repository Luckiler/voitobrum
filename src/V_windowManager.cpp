#include <vector>
#include <thread>
#include <SDL2/SDL.h>
#include "V_windowManager.h"


// Starts a new window in a Thread and adds it to the list
template<class T>
void V_windowManager::createNewWindow() {
    std::thread t(windowCreator<T>);
    windowThreads.push_back(t);
}

// Creates and runs a new window
template<class T>
void V_windowManager::windowCreator() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    } else {
        T *window = new T();
        window->run();
    }
}
