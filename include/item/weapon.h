#ifndef _WEAPON_H_
#define _WEAPON_H_

#include "../item.h"

class Equipment;

#include <string>

class Weapon: public Item {

    int hitForce;

    friend class Equipment;

public:

    int return_hitforce();
    Weapon(std::string name_val = "none", int price_val = 0, int hitForce_val = 0, int amount_val = 1);
    ~Weapon();

    friend class Bow;
    friend class Sword;
};

#endif