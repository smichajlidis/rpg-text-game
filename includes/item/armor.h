#ifndef _ARMOR_H_
#define _ARMOR_H_
#include <iostream>

class Equipment;

class Armor: public Item {

    int armorStrength;

    friend class Equipment;

public:

    Armor(std::string name_val = "none", int price_val = 0, int armorStrength_val = 0, int amount_val = 1);
    ~Armor();

};

#endif