#ifndef _WEAPON_H_
#define _WEAPON_H_
#include <iostream>

class Weapon: public Item {

    int hitForce;

public:

    Weapon(std::string name_val = "none", int price_val = 0, int hitForce_val = 0, int amount_val = 1);
    ~Weapon();

};

#endif