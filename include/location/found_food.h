#ifndef _FOUNDFOOD_H_
#define _FOUNDFOOD_H_

#include "../Location.hpp"

class Item;

#include <vector>

class FoundFood: public Location {

    public:


    FoundFood();
    ~FoundFood();

    friend class GameState;
};

#endif