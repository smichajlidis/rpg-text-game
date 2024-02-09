#ifndef _FOOD_H_
#define _FOOD_H_

#include "../item.h"

class Food: public Item {

    int hpRestoration;

    friend class Equipment;
    friend class ForestFruits;

public:

    Food(std::string name_val = "none", int price_val = 0, int hpRestoration_val = 0, int amount_val = 1);
    ~Food();

};

#endif