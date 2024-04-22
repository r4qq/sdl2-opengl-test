#include <cstdlib>
#include <iostream>
#include "src/include/SDL2/SDL.h"
#include "src/include/SDL2/SDL_error.h"
#include "src/include/SDL2/SDL_events.h"
#include "src/include/SDL2/SDL_video.h"

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow("hello sdl", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

    if( NULL == window)
    {
        std::cout << "erroe: " << SDL_GetError() << '\n';
        return EXIT_FAILURE;
    }

    SDL_Event windowEvent;

    while (true) 
    {
        if (SDL_PollEvent(&windowEvent)) 
        {
            if (SDL_QUIT == windowEvent.type) 
                break;
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}