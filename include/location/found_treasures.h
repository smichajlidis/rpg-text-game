#ifndef _FOUNDTREASURES_H_
#define _FOUNDTREASURES_H_

#include "../location.h"

#include <iostream>
#include <vector>

class Item;

class FoundTreasures: public Location {

    std::vector <Item*> related_items;

    public:

    virtual Location* making_a_choice();

    FoundTreasures(std::string name_val="found_treasures");
    ~FoundTreasures();

    friend class GameState;
};

#endif