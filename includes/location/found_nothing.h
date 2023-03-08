#ifndef _FOUNDNOTHING_H_
#define _FOUNDNOTHING_H_
#include <iostream>

class FoundNothing: public Location {
    public:

    virtual Location* making_a_choice();

    FoundNothing(std::string name_val="found_nothing");
    ~FoundNothing();
};

#endif