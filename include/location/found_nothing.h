#ifndef _FOUNDNOTHING_H_
#define _FOUNDNOTHING_H_

#include "../location.h"

class FoundNothing: public Location {
    public:


    FoundNothing(std::string name_val="found_nothing");
    ~FoundNothing();
};

#endif