#include <iostream>
#include "../../../includes/item/weapon/hunting_weapon.h"

HuntingWeapon::HuntingWeapon(std::string name_val, int price_val, int hitForce_val, int amount_val)
    : Weapon(name_val, price_val, hitForce_val, amount_val) {
        hunting = true;
}

HuntingWeapon::~HuntingWeapon() {
}