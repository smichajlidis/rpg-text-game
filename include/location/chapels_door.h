#ifndef _CHAPELS_DOOR_H_
#define _CHAPELS_DOOR_H_

#include "../location.h"

class ChapelsDoor: public Location {

public:

    virtual Location* making_a_choice();

    ChapelsDoor(std::string name_val = "chapel");
    ~ChapelsDoor();

};

#endif