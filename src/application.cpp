#include <SDL2/SDL.h>
#include "../include/application.h"
#include "../include/binary_search.h"
#include "../include/array.h"

// Window information hold objects and drawing information

Application::Application(int _windowWidth, int _windowHeight)
{
    windowWidth = _windowWidth;
    windowHeight = _windowHeight;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        "AlgoViewer",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        windowWidth,
        windowHeight,
        0);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

    algorithm = nullptr;
    data = nullptr;
};

void Application::run()
{
    BinarySearch bSearch = BinarySearch();
    DSArray array = DSArray({1, 2, 3, 4});

    setAlgorithm(&bSearch);
    setData(&array);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);

    drawData();

    SDL_RenderPresent(renderer);
    SDL_Delay(5000);
}

void Application::setAlgorithm(BinarySearch *bsearch)
{
    algorithm = bsearch;
}

void Application::setData(DSArray *array)
{
    data = array;
}

void Application::drawData()
{
    data->draw(renderer);
}

void Application::close()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}
