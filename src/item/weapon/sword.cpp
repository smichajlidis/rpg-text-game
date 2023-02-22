#include <iostream>
#include "../../../includes/item/weapon/sword.h"

Sword::Sword(std::string name_val, int price_val, int hitForce_val, int amount_val)
    : Weapon(name_val, price_val, hitForce_val, amount_val) {
}

Sword::~Sword() {
}