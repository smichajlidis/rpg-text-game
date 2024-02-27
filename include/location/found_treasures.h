#ifndef _FOUNDTREASURES_H_
#define _FOUNDTREASURES_H_

#include "../Location.hpp"

class Item;

#include <vector>

class FoundTreasures: public Location {



    public:


    FoundTreasures();
    ~FoundTreasures();

    friend class GameState;
};

#endif