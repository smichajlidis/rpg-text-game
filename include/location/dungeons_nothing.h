#ifndef _DUNGEONSNOTHING_H_
#define _DUNGEONSNOTHING_H_

#include "../location.h"

class DungeonsNothing: public Location {
    public:


    DungeonsNothing(std::string name_val="dungeons_nothing");
    ~DungeonsNothing();
};

#endif