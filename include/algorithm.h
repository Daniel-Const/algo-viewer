#include <string>
#include "./data_structure.h"

/**
 *  Base Algorithm class
 */

class Algorithm
{

public:
    Algorithm(std::string name);

    void step();
    void setDataStructure(DataStructure dataStructure);

    int stepsPerSecond;
    std::string name;
};