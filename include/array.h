/**
 * Array Data Structure
 */

#pragma once

#include "data_structure.h"
#include <vector>
#include <SDL2/SDL.h>

class DSArrayNode
{
public:
    DSArrayNode(int value);
    void setColor(int red, int green, int blue, int alpha);
    int color[4];
    int value;
};

class DSArray
{
public:
    DSArray(std::vector<int> _items);
    std::vector<DSArrayNode> items;

    int length();

    int itemWidth;
    int itemHeight;

    int startX;
    int startY;

    int padding;

    void draw(SDL_Renderer *renderer);
};