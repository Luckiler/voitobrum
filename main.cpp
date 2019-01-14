#define SDL_MAIN_HANDLED

#include <SDL2/SDL.h>
#include <assert.h>
#include <cstdio>

const Uint32 SCREEN_WIDTH = 640;
const Uint32 SCREEN_HEIGHT = 480;

int main(int argc, char *argv[]) {
    //The window we'll be rendering to
    SDL_Window* window = nullptr;

    //The surface contained by the window
    SDL_Surface* screenSurface = nullptr;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    }
    else
    {
        //Create window
        window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( window == nullptr )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        }
        else
        {
            //Get window surface
            screenSurface = SDL_GetWindowSurface( window );

            //Fill the surface white
            SDL_FillRect( screenSurface, nullptr, SDL_MapRGB( screenSurface->format, 0x00, 0xFF, 0x00 ) );

            //Update the surface
            SDL_UpdateWindowSurface( window );

            //Wait two seconds
            SDL_Delay( 2000 );
        }
    }
    //Destroy window
    SDL_DestroyWindow( window );

    //Quit SDL subsystems
    SDL_Quit();

    return 0;
}
