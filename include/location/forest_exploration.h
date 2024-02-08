#ifndef _FORESTEXPLORATION_H_
#define _FORESTEXPLORATION_H_

#include "../location.h"

#include <iostream>

class ForestExploration: public Location {

public:

    virtual Location* making_a_choice();

    ForestExploration(std::string name_val="forest_exploration");
    ~ForestExploration();
};

#endif