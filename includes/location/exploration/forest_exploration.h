#ifndef _FORESTEXPLORATION_H_
#define _FORESTEXPLORATION_H_
#include <iostream>

class ForestExploration: public Exploration {

public:

    virtual Location* making_a_choice();

    ForestExploration(std::string name_val="forest_exploration");
    ~ForestExploration();
};

#endif