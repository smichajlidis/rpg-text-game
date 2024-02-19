#ifndef _FOUNDFOOD_H_
#define _FOUNDFOOD_H_

#include "../Location.hpp"

class Item;

#include <vector>

class FoundFood: public Location {

    std::vector <Item*> related_items;

    public:


    FoundFood();
    ~FoundFood();

    friend class GameState;
};

#endif