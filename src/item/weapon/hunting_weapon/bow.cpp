#include <iostream>
#include "../../../../includes/item/weapon/hunting_weapon/bow.h"

Bow::Bow(std::string name_val, int price_val, int hitForce_val, int amount_val)
    : HuntingWeapon(name_val, price_val, hitForce_val, amount_val) {
}

Bow::~Bow() {
}