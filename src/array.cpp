#include <iostream>
#include <vector>
#include <SDL2/SDL.h>

#include "../include/array.h"

DSArrayNode::DSArrayNode(int _value)
{
    value = _value;
    setColor(255, 255, 255, 255);
}

void DSArrayNode::setColor(int red, int green, int blue, int alpha)
{
    color[0] = red;
    color[1] = green;
    color[2] = blue;
    color[3] = alpha;
}

DSArray::DSArray(std::vector<int> _items)
{
    items = {};

    for (auto item : _items)
    {
        DSArrayNode node = DSArrayNode(item);
        items.push_back(node);
    }

    itemWidth = 80;
    itemHeight = 80;

    startX = 60;
    startY = 60;

    padding = 5;
};

void DSArray::draw(SDL_Renderer *renderer)
{
    // Draw the items in the array

    int xPos = startX;

    for (auto item : items)
    {
        SDL_SetRenderDrawColor(renderer, item.color[0], item.color[1], item.color[2], item.color[3]);

        SDL_Rect rect;
        rect.x = xPos;
        rect.y = startY;
        rect.w = itemWidth;
        rect.h = itemHeight;

        SDL_RenderDrawRect(renderer, &rect);
        xPos += itemWidth + padding;
    }

    // SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
}

int DSArray::length()
{
    return items.size();
}