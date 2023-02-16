#ifndef _WEAPON_H_
#define _WEAPON_H_
#include <iostream>

class Equipment;

class Weapon: public Item {

    int hitForce;

    friend class Equipment;

public:

    Weapon(std::string name_val = "none", int price_val = 0, int hitForce_val = 0, int amount_val = 1);
    ~Weapon();

};

#endif