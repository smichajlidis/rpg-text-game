#ifndef _HUNTING_H_
#define _HUNTING_H_

#include "../location.h"

class Item;

#include <vector>

class Creature;

class Hunting: public Location {

    std::vector <Item*> related_items;

    public:

    Hunting();
    ~Hunting();

    friend class GameState;
};

#endif