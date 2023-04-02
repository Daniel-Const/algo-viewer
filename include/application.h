#include <SDL2/SDL.h>
#include "binary_search.h"

class Application
{
public:
    Application(int _windowWidth, int _windowHeight);
    void run();
    void close();
    void setAlgorithm(BinarySearch *bsearch);
    void setData(DSArray *array);
    void drawData();

    SDL_Window *window;
    SDL_Renderer *renderer;

    int windowWidth;
    int windowHeight;

    // Algorithm
    BinarySearch *algorithm;

    // Data structure
    DSArray *data;
};