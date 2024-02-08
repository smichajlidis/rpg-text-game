#ifndef _CLOTHES_H_
#define _CLOTHES_H_

#include "../item.h"

#include <iostream>

class Equipment;

class Clothes: public Item {

    int charismaIncrease;

    friend class Equipment;

public:

    Clothes(std::string name_val = "none", int price_val = 0, int charismaIncrease_val = 0, int amount_val = 1);
    ~Clothes();

};

#endif