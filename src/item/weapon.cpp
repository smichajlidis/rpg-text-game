#include <iostream>
#include "../../includes/item/weapon.h"

int Weapon::return_hitforce() {
    return hitForce;
}

Weapon::Weapon(std::string name_val, int price_val, int hitForce_val, int amount_val)
    : Item(name_val, price_val, amount_val), hitForce {hitForce_val} {
}

Weapon::~Weapon() {
}