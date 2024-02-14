#ifndef _FOUNDTREASURES_H_
#define _FOUNDTREASURES_H_

#include "../location.h"

class Item;

#include <vector>

class FoundTreasures: public Location {

    std::vector <Item*> related_items;

    public:

    virtual Location* making_a_choice();

    FoundTreasures(std::string name_val="found_treasures");
    ~FoundTreasures();

    friend class GameState;
};

#endif