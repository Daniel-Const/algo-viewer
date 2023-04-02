#include "../include/binary_search.h"
#include "../include/array.h"

BinarySearch::BinarySearch()
{
    name = "Binary Search";
    min = 0;
    max = 0;
};

void run(DSArray *array)
{
    int min = 0;
    int max = array->length();

    for (auto item : array->items)
    {
        // do a thing
    }
}