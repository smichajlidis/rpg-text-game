#ifndef _CHAPEL_H_
#define _CHAPEL_H_

#include "../location.h"

#include <iostream>

class Chapel: public Location {

public:

    virtual Location* making_a_choice();

    Chapel(std::string name_val = "chapel", std::string description_val = "You are inside old, dark chapel. A bit scary place but for some reason you are in.", std::string choice_1_val = "Make a sacrifice and pray", std::string choice_2_val = "Explore dungeons");
    ~Chapel();

};

#endif