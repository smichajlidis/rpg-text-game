#ifndef _FORESTFRUITS_H_
#define _FORESTFRUITS_H_

#include "../food.h"

#include <iostream>

class ForestFruits: public Food {

public:

    virtual void show_details();
    virtual Item* clone();
    virtual std::string return_class_name();
    virtual int return_value();
    
    ForestFruits(std::string name_val="FOREST FRUITS", int price_val=5, int amount_val=1, int hpRestoration_val=5);
    virtual ~ForestFruits();

    friend class GameState;
};

#endif