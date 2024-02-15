#ifndef _FOUNDFOOD_H_
#define _FOUNDFOOD_H_

#include "../location.h"

class Item;

#include <vector>

class FoundFood: public Location {

    std::vector <Item*> related_items;

    public:


    FoundFood(std::string name_val="found_food");
    ~FoundFood();

    friend class GameState;
};

#endif