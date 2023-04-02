#pragma once

#include "../include/array.h"
#include <string>

/**
 * Binary Search Algorithm
 *
 * Requires a DSArray Data structure
 */

class BinarySearch
{

public:
    BinarySearch();
    bool step(DSArray *array);
    void run(DSArray *array);

    int min;
    int max;

    std::string name;
};