#ifndef _FOUNDFOOD_H_
#define _FOUNDFOOD_H_

#include "../location.h"

#include <iostream>
#include <vector>

class Item;

class FoundFood: public Location {

    std::vector <Item*> related_items;

    public:

    virtual Location* making_a_choice();

    FoundFood(std::string name_val="found_food");
    ~FoundFood();

    friend class GameState;
};

#endif