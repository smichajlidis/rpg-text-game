#ifndef _DUNGEONS_H_
#define _DUNGEONS_H_

#include "../location.h"

class Dungeons: public Location {

public:

    virtual Location* making_a_choice();

    Dungeons(std::string name_val="dungeons");
    ~Dungeons();
};

#endif
