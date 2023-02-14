#ifndef _CLOTHES_H_
#define _CLOTHES_H_
#include <iostream>

class Clothes: public Item {

    int charismaIncrease;

public:

    Clothes(std::string name_val = "none", int price_val = 0, int charismaIncrease_val = 0, int amount_val = 1);
    ~Clothes();

};

#endif