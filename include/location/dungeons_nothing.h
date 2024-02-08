#ifndef _DUNGEONSNOTHING_H_
#define _DUNGEONSNOTHING_H_
#include <iostream>

#include "../location.h"

class DungeonsNothing: public Location {
    public:

    virtual Location* making_a_choice();

    DungeonsNothing(std::string name_val="dungeons_nothing");
    ~DungeonsNothing();
};

#endif