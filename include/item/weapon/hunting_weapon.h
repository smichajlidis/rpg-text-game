#ifndef _HUNTINGWEAPON_H_
#define _HUNTINGWEAPON_H_

#include "../weapon.h"

class HuntingWeapon: public Weapon {

    bool hunting;

    friend class Equipment;

public:

    HuntingWeapon(std::string name_val = "none", int price_val = 0, int hitForce_val = 0, int amount_val = 1);
    ~HuntingWeapon();

};

#endif